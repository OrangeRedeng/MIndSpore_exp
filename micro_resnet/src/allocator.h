
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
#ifndef MINDSPORE_LITE_MICRO_LIBRARY_SOURCE_ALLOCATOR_H_
#define MINDSPORE_LITE_MICRO_LIBRARY_SOURCE_ALLOCATOR_H_

#include <stddef.h>
#include "stdatomic.h"
#include "stdbool.h"

typedef struct MemBlock {
#ifdef __clang__
  atomic_bool occupied;
#else
  bool occupied;
#endif
  size_t size;
  void *addr;
  struct MemBlock *next;
} MemBlock;

void IncRefCount();
void DecRefCount();
void *GlobalMemory();
void *Malloc(size_t size);
bool LockBuffer(void *block);
bool UnLockBuffer(void *block);

#endif  // MINDSPORE_LITE_MICRO_LIBRARY_SOURCE_ALLOCATOR_H_
