
/**
 * Copyright 2022-2023 Huawei Technologies Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "src/allocator.h"
#include "stdatomic.h"
#include "stdlib.h"
#include <stdbool.h>

MemBlock *mem_block = NULL;
atomic_int kReferenceCount = 0;
#ifdef __clang__
  atomic_bool kLock = false;
#else
  bool kLock = false;
#endif

void IncRefCount() { ++kReferenceCount; }

void DecRefCount() {
  --kReferenceCount;
  bool expected = false;
  while (!atomic_compare_exchange_strong(&kLock, &expected, true)) {
    expected = false;
  }
  if (kReferenceCount == 0) {
    while (mem_block != NULL) {
      MemBlock *next = mem_block->next;
      free(mem_block);
      mem_block = next;
    }
  }
  kLock = false;
}

void *GlobalMemory() {
size_t init_size = 12137024;

  bool expected = false;
  while (!atomic_compare_exchange_strong(&kLock, &expected, true)) {
    expected = false;
  }
  if (mem_block != NULL) {
    kLock = false;
    return mem_block;
  }
  mem_block = malloc(sizeof(MemBlock) + init_size);
  mem_block->occupied = false;
  mem_block->size = init_size;
  mem_block->addr = (char *)mem_block + sizeof(MemBlock);
  mem_block->next = NULL;
  kLock = false;
  return mem_block;
}

void *Malloc(size_t size) {
  bool expected = false;
  while (!atomic_compare_exchange_strong(&kLock, &expected, true)) {
    expected = false;
  }
  if (mem_block == NULL) {
    kLock = false;
    return NULL;
  }
  MemBlock *pre = mem_block;
  MemBlock *cur = mem_block;
  MemBlock *find = NULL;
  while (cur != NULL) {
    if (cur->size < size) {
      break;
    }
    if (!cur->occupied) {
      find = cur;
    }
    pre = cur;
    cur = cur->next;
  }
  if (find != NULL) {
    find->occupied = true;
    kLock = false;
    return find;
  }
  MemBlock *block = malloc(sizeof(MemBlock) + size);
  block->occupied = true;
  block->size = size;
  block->addr = (char *)block + sizeof(MemBlock);
  block->next = NULL;
  block->next = pre->next;
  pre->next = block;
  kLock = false;
  return block;
}

bool LockBuffer(void *block) {
  MemBlock *m_block = block;
  bool expected = false;
  return atomic_compare_exchange_strong(&(m_block->occupied), &expected, true);
}

bool UnLockBuffer(void *block) {
  MemBlock *m_block = block;
  bool expected = true;
  return atomic_compare_exchange_strong(&(m_block->occupied), &expected, false);
}
