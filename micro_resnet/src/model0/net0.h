
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
#ifdef __cplusplus
extern "C" {
#endif
/**
  * set input tensors
  * @param inputs, the input data ptr's array of the model, the tensors' count of input may be greater than one.
  * @param num, the input data's number of the model.
  **/
int SetInputs0(const void **inputs, int num);

/**
  * get the memory space size of the inference.
  **/
int GetBufferSize0();
/**
  * set the memory space for the inference
  **/
int SetBuffer0(void *buffer);

/**
  * free the memory of packed weights, and set the membuf buffer and input address to NULL
  **/
void FreeResource0();
/**
  * net execute function
  **/
void Execute0(bool train_mode);

#ifdef __cplusplus
}
#endif
