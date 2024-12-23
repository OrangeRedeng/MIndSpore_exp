
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

#include "src/model0/weight0.h"
#include "src/model0/net0.h"

const unsigned char *m0_input0 = 0;
int SetInputs0(const void **inputs, int num) {
  if (inputs == NULL) {
    return RET_ERROR;
  }
  if (num !=1) {
    return RET_ERROR;
  }
	m0_input0 = (unsigned char *)inputs[0];
  return RET_OK;
}
int GetBufferSize0() {
  return 12137024;
}
int SetBuffer0( void *buffer) {
  m0_buffer = (unsigned char *)buffer;
  return RET_OK;
}
void FreeResource0() {
  m0_buffer= NULL;
  m0_input0 = NULL;
  void **allocated[] = {
    (void**)&m0_weight119,
    (void**)&m0_weight120,
    (void**)&m0_weight113,
    (void**)&m0_weight117,
    (void**)&m0_weight112,
    (void**)&m0_weight118,
    (void**)&m0_weight131,
    (void**)&m0_weight135,
    (void**)&m0_weight132,
    (void**)&m0_weight133,
    (void**)&m0_weight134,
    (void**)&m0_weight136,
    (void**)&m0_weight137,
    (void**)&m0_weight138,
    (void**)&m0_weight139,
    (void**)&m0_weight114,
    (void**)&m0_weight123,
    (void**)&m0_weight124,
    (void**)&m0_weight177,
    (void**)&m0_weight178,
    (void**)&m0_weight181,
    (void**)&m0_weight182,
    (void**)&m0_weight183,
    (void**)&m0_weight184,
    (void**)&m0_weight187,
    (void**)&m0_weight193,
    (void**)&m0_weight194,
    (void**)&m0_weight195,
    (void**)&m0_weight197,
    (void**)&m0_weight196,
    (void**)&m0_weight125,
    (void**)&m0_weight126,
    (void**)&m0_weight129,
    (void**)&m0_weight130,
    (void**)&m0_weight145,
    (void**)&m0_weight146,
    (void**)&m0_weight149,
    (void**)&m0_weight150,
    (void**)&m0_weight109,
    (void**)&m0_weight111,
    (void**)&m0_weight110,
    (void**)&m0_weight151,
    (void**)&m0_weight152,
    (void**)&m0_weight155,
    (void**)&m0_weight156,
    (void**)&m0_weight157,
    (void**)&m0_weight161,
    (void**)&m0_weight158,
    (void**)&m0_weight140,
    (void**)&m0_weight143,
    (void**)&m0_weight144,
    (void**)&m0_weight198,
    (void**)&m0_weight199,
    (void**)&m0_weight200,
    (void**)&m0_weight201,
    (void**)&m0_weight202,
    (void**)&m0_weight203,
    (void**)&m0_weight204,
    (void**)&m0_weight207,
    (void**)&m0_weight208,
    (void**)&m0_weight209,
    (void**)&m0_weight210,
    (void**)&m0_weight213,
    (void**)&m0_weight214,
    (void**)&m0_weight215,
    (void**)&m0_weight216,
    (void**)&m0_weight188,
    (void**)&m0_weight189,
    (void**)&m0_weight190,
    (void**)&m0_weight171,
    (void**)&m0_weight172,
    (void**)&m0_weight175,
    (void**)&m0_weight176,
    (void**)&m0_weight166,
    (void**)&m0_weight169,
    (void**)&m0_weight170,
    (void**)&m0_weight159,
    (void**)&m0_weight160,
    (void**)&m0_weight162,
    (void**)&m0_weight163,
    (void**)&m0_weight164,
    (void**)&m0_weight165,

  };
  for (int i = 0; i < 82; ++i) {
    *(allocated[i]) = NULL;
  }
  if (m0_weight != NULL) {
    free(m0_weight);
    m0_weight = NULL;
  }
}
void Execute0(bool train_mode) {
  {
    memset((float *)(m0_buffer + 11239424), 0, 7056);
    memset((float *)(m0_buffer + 11246480), 0, 7056);
    int thread_num = MSMIN(m0_thread_num, 112);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 7, 7, 2, 2, 1, 1, 3, 3, 3, 3, 1, 0, 1, 224, 224, 3, 1, 112, 112, 64, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_input0), (float *)(m0_buffer + 11239424), m0_weight109, m0_weight110, (float *)(m0_buffer + 11246480), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    PoolingParameter pooling_parameter = {{ "", 92, m0_thread_num, 0}, (PoolMode)(1), (RoundType)(2), (PadType)(0), (ActType)(0), 0, false, 3, 3, 2, 2, 1, 1, 1, 1};
    PoolingComputeParam pooling_args = {112, 112, 1, 64, 56, 56, 1, 64, 3, 3, -3.40282e+38, 3.40282e+38};
    MaxPooling((float *)(m0_buffer + 0), (float *)(m0_buffer + 3211264), &pooling_parameter, &pooling_args, 0, 1);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 3072);
    memset((float *)(m0_buffer + 11242496), 0, 3072);
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 64, 1, 56, 56, 256, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 3211264), (float *)(m0_buffer + 11239424), m0_weight111, m0_weight112, (float *)(m0_buffer + 11242496), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 3072);
    memset((float *)(m0_buffer + 11242496), 0, 3072);
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 64, 1, 56, 56, 64, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 3211264), (float *)(m0_buffer + 11239424), m0_weight113, m0_weight114, (float *)(m0_buffer + 11242496), (float *)(m0_buffer + 4014080), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 196608);
    memset((void *)(m0_buffer + 11436032), 0, 196608);
    memset((void *)(m0_buffer + 11632640), 0, 1024);
    memset((void *)(m0_buffer + 11633664), 0, 3072);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11436032), (float *)(m0_buffer + 11632640), (float *)(m0_buffer + 11633664)};
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 56, 56, 64, 1, 56, 56, 64, thread_num, 8, 6, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform8x8Unit, NULL, NULL, OutputTransform8x6ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 4014080), m0_weight115, m0_weight116, (float *)(m0_buffer + 3211264), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 3072);
    memset((float *)(m0_buffer + 11242496), 0, 3072);
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 64, 1, 56, 56, 256, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 3211264), (float *)(m0_buffer + 11239424), m0_weight117, m0_weight118, (float *)(m0_buffer + 11242496), (float *)(m0_buffer + 4816896), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 56, 56, 256}, 802816, {1, 56, 56, 256}, 802816, {1, 56, 56, 256}, 802816, {802816, 14336, 256, 1}, {802816, 14336, 256, 1}, {802816, 14336, 256, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 4816896))+0), ((uint8_t *)((float *)(m0_buffer + 0))+0), ((uint8_t *)((float *)(m0_buffer + 8028160))+0), 802816, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 256, 1, 56, 56, 64, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 8028160), (float *)(m0_buffer + 11239424), m0_weight119, m0_weight120, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 196608);
    memset((void *)(m0_buffer + 11436032), 0, 196608);
    memset((void *)(m0_buffer + 11632640), 0, 1024);
    memset((void *)(m0_buffer + 11633664), 0, 3072);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11436032), (float *)(m0_buffer + 11632640), (float *)(m0_buffer + 11633664)};
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 56, 56, 64, 1, 56, 56, 64, thread_num, 8, 6, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform8x8Unit, NULL, NULL, OutputTransform8x6ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight121, m0_weight122, (float *)(m0_buffer + 802816), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 3072);
    memset((float *)(m0_buffer + 11242496), 0, 3072);
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 64, 1, 56, 56, 256, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 802816), (float *)(m0_buffer + 11239424), m0_weight123, m0_weight124, (float *)(m0_buffer + 11242496), (float *)(m0_buffer + 1605632), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 56, 56, 256}, 802816, {1, 56, 56, 256}, 802816, {1, 56, 56, 256}, 802816, {802816, 14336, 256, 1}, {802816, 14336, 256, 1}, {802816, 14336, 256, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 1605632))+0), ((uint8_t *)((float *)(m0_buffer + 8028160))+0), ((uint8_t *)((float *)(m0_buffer + 4816896))+0), 802816, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 256, 1, 56, 56, 64, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 4816896), (float *)(m0_buffer + 11239424), m0_weight125, m0_weight126, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 8028160), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 196608);
    memset((void *)(m0_buffer + 11436032), 0, 196608);
    memset((void *)(m0_buffer + 11632640), 0, 1024);
    memset((void *)(m0_buffer + 11633664), 0, 3072);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11436032), (float *)(m0_buffer + 11632640), (float *)(m0_buffer + 11633664)};
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 56, 56, 64, 1, 56, 56, 64, thread_num, 8, 6, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform8x8Unit, NULL, NULL, OutputTransform8x6ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 8028160), m0_weight127, m0_weight128, (float *)(m0_buffer + 8830976), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 3072);
    memset((float *)(m0_buffer + 11242496), 0, 3072);
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 64, 1, 56, 56, 256, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 8830976), (float *)(m0_buffer + 11239424), m0_weight129, m0_weight130, (float *)(m0_buffer + 11242496), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 56, 56, 256}, 802816, {1, 56, 56, 256}, 802816, {1, 56, 56, 256}, 802816, {802816, 14336, 256, 1}, {802816, 14336, 256, 1}, {802816, 14336, 256, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 0))+0), ((uint8_t *)((float *)(m0_buffer + 4816896))+0), ((uint8_t *)((float *)(m0_buffer + 8028160))+0), 802816, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 256, 1, 28, 28, 512, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 8028160), (float *)(m0_buffer + 11239424), m0_weight131, m0_weight132, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 56);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 56, 56, 256, 1, 56, 56, 128, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 8028160), (float *)(m0_buffer + 11239424), m0_weight133, m0_weight134, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 1605632), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 55296);
    memset((float *)(m0_buffer + 11294720), 0, 55296);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 1, 56, 56, 128, 1, 28, 28, 128, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 1605632), (float *)(m0_buffer + 11239424), m0_weight135, m0_weight136, (float *)(m0_buffer + 11294720), (float *)(m0_buffer + 3211264), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 6144);
    memset((float *)(m0_buffer + 11245568), 0, 6144);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 128, 1, 28, 28, 512, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 3211264), (float *)(m0_buffer + 11239424), m0_weight137, m0_weight138, (float *)(m0_buffer + 11245568), (float *)(m0_buffer + 1605632), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 28, 28, 512}, 401408, {1, 28, 28, 512}, 401408, {1, 28, 28, 512}, 401408, {401408, 14336, 512, 1}, {401408, 14336, 512, 1}, {401408, 14336, 512, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 1605632))+0), ((uint8_t *)((float *)(m0_buffer + 0))+0), ((uint8_t *)((float *)(m0_buffer + 3211264))+0), 401408, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 24576);
    memset((float *)(m0_buffer + 11264000), 0, 24576);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 512, 1, 28, 28, 128, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 3211264), (float *)(m0_buffer + 11239424), m0_weight139, m0_weight140, (float *)(m0_buffer + 11264000), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 393216);
    memset((void *)(m0_buffer + 11632640), 0, 393216);
    memset((void *)(m0_buffer + 12025856), 0, 1024);
    memset((void *)(m0_buffer + 12026880), 0, 6144);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11632640), (float *)(m0_buffer + 12025856), (float *)(m0_buffer + 12026880)};
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 28, 28, 128, 1, 28, 28, 128, thread_num, 8, 6, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform8x8Unit, NULL, NULL, OutputTransform8x6ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight141, m0_weight142, (float *)(m0_buffer + 401408), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 6144);
    memset((float *)(m0_buffer + 11245568), 0, 6144);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 128, 1, 28, 28, 512, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 401408), (float *)(m0_buffer + 11239424), m0_weight143, m0_weight144, (float *)(m0_buffer + 11245568), (float *)(m0_buffer + 802816), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 28, 28, 512}, 401408, {1, 28, 28, 512}, 401408, {1, 28, 28, 512}, 401408, {401408, 14336, 512, 1}, {401408, 14336, 512, 1}, {401408, 14336, 512, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 802816))+0), ((uint8_t *)((float *)(m0_buffer + 3211264))+0), ((uint8_t *)((float *)(m0_buffer + 4816896))+0), 401408, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 24576);
    memset((float *)(m0_buffer + 11264000), 0, 24576);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 512, 1, 28, 28, 128, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 4816896), (float *)(m0_buffer + 11239424), m0_weight145, m0_weight146, (float *)(m0_buffer + 11264000), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 393216);
    memset((void *)(m0_buffer + 11632640), 0, 393216);
    memset((void *)(m0_buffer + 12025856), 0, 1024);
    memset((void *)(m0_buffer + 12026880), 0, 6144);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11632640), (float *)(m0_buffer + 12025856), (float *)(m0_buffer + 12026880)};
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 28, 28, 128, 1, 28, 28, 128, thread_num, 8, 6, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform8x8Unit, NULL, NULL, OutputTransform8x6ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight147, m0_weight148, (float *)(m0_buffer + 401408), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 6144);
    memset((float *)(m0_buffer + 11245568), 0, 6144);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 128, 1, 28, 28, 512, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 401408), (float *)(m0_buffer + 11239424), m0_weight149, m0_weight150, (float *)(m0_buffer + 11245568), (float *)(m0_buffer + 802816), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 28, 28, 512}, 401408, {1, 28, 28, 512}, 401408, {1, 28, 28, 512}, 401408, {401408, 14336, 512, 1}, {401408, 14336, 512, 1}, {401408, 14336, 512, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 802816))+0), ((uint8_t *)((float *)(m0_buffer + 4816896))+0), ((uint8_t *)((float *)(m0_buffer + 2408448))+0), 401408, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 24576);
    memset((float *)(m0_buffer + 11264000), 0, 24576);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 512, 1, 28, 28, 128, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 2408448), (float *)(m0_buffer + 11239424), m0_weight151, m0_weight152, (float *)(m0_buffer + 11264000), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 393216);
    memset((void *)(m0_buffer + 11632640), 0, 393216);
    memset((void *)(m0_buffer + 12025856), 0, 1024);
    memset((void *)(m0_buffer + 12026880), 0, 6144);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11632640), (float *)(m0_buffer + 12025856), (float *)(m0_buffer + 12026880)};
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 28, 28, 128, 1, 28, 28, 128, thread_num, 8, 6, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform8x8Unit, NULL, NULL, OutputTransform8x6ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight153, m0_weight154, (float *)(m0_buffer + 401408), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 6144);
    memset((float *)(m0_buffer + 11245568), 0, 6144);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 128, 1, 28, 28, 512, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 401408), (float *)(m0_buffer + 11239424), m0_weight155, m0_weight156, (float *)(m0_buffer + 11245568), (float *)(m0_buffer + 802816), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 28, 28, 512}, 401408, {1, 28, 28, 512}, 401408, {1, 28, 28, 512}, 401408, {401408, 14336, 512, 1}, {401408, 14336, 512, 1}, {401408, 14336, 512, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 802816))+0), ((uint8_t *)((float *)(m0_buffer + 2408448))+0), ((uint8_t *)((float *)(m0_buffer + 4014080))+0), 401408, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 24576);
    memset((float *)(m0_buffer + 11264000), 0, 24576);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 512, 1, 14, 14, 1024, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 4014080), (float *)(m0_buffer + 11239424), m0_weight157, m0_weight158, (float *)(m0_buffer + 11264000), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 24576);
    memset((float *)(m0_buffer + 11264000), 0, 24576);
    int thread_num = MSMIN(m0_thread_num, 28);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 28, 28, 512, 1, 28, 28, 256, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 4014080), (float *)(m0_buffer + 11239424), m0_weight159, m0_weight160, (float *)(m0_buffer + 11264000), (float *)(m0_buffer + 802816), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 110592);
    memset((float *)(m0_buffer + 11350016), 0, 110592);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 1, 28, 28, 256, 1, 14, 14, 256, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 802816), (float *)(m0_buffer + 11239424), m0_weight161, m0_weight162, (float *)(m0_buffer + 11350016), (float *)(m0_buffer + 1605632), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 256, 1, 14, 14, 1024, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 1605632), (float *)(m0_buffer + 11239424), m0_weight163, m0_weight164, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 802816), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 802816))+0), ((uint8_t *)((float *)(m0_buffer + 0))+0), ((uint8_t *)((float *)(m0_buffer + 1605632))+0), 200704, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 49152);
    memset((float *)(m0_buffer + 11288576), 0, 49152);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 1024, 1, 14, 14, 256, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 1605632), (float *)(m0_buffer + 11239424), m0_weight165, m0_weight166, (float *)(m0_buffer + 11288576), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 442368);
    memset((void *)(m0_buffer + 11681792), 0, 442368);
    memset((void *)(m0_buffer + 12124160), 0, 576);
    memset((void *)(m0_buffer + 12124736), 0, 12288);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11681792), (float *)(m0_buffer + 12124160), (float *)(m0_buffer + 12124736)};
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 14, 14, 256, 1, 14, 14, 256, thread_num, 6, 4, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform6x6Unit, NULL, NULL, OutputTransform6x4ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight167, m0_weight168, (float *)(m0_buffer + 200704), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 256, 1, 14, 14, 1024, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 200704), (float *)(m0_buffer + 11239424), m0_weight169, m0_weight170, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 401408), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 401408))+0), ((uint8_t *)((float *)(m0_buffer + 1605632))+0), ((uint8_t *)((float *)(m0_buffer + 2408448))+0), 200704, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 49152);
    memset((float *)(m0_buffer + 11288576), 0, 49152);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 1024, 1, 14, 14, 256, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 2408448), (float *)(m0_buffer + 11239424), m0_weight171, m0_weight172, (float *)(m0_buffer + 11288576), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 442368);
    memset((void *)(m0_buffer + 11681792), 0, 442368);
    memset((void *)(m0_buffer + 12124160), 0, 576);
    memset((void *)(m0_buffer + 12124736), 0, 12288);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11681792), (float *)(m0_buffer + 12124160), (float *)(m0_buffer + 12124736)};
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 14, 14, 256, 1, 14, 14, 256, thread_num, 6, 4, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform6x6Unit, NULL, NULL, OutputTransform6x4ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight173, m0_weight174, (float *)(m0_buffer + 200704), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 256, 1, 14, 14, 1024, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 200704), (float *)(m0_buffer + 11239424), m0_weight175, m0_weight176, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 401408), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 401408))+0), ((uint8_t *)((float *)(m0_buffer + 2408448))+0), ((uint8_t *)((float *)(m0_buffer + 1204224))+0), 200704, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 49152);
    memset((float *)(m0_buffer + 11288576), 0, 49152);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 1024, 1, 14, 14, 256, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 1204224), (float *)(m0_buffer + 11239424), m0_weight177, m0_weight178, (float *)(m0_buffer + 11288576), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 442368);
    memset((void *)(m0_buffer + 11681792), 0, 442368);
    memset((void *)(m0_buffer + 12124160), 0, 576);
    memset((void *)(m0_buffer + 12124736), 0, 12288);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11681792), (float *)(m0_buffer + 12124160), (float *)(m0_buffer + 12124736)};
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 14, 14, 256, 1, 14, 14, 256, thread_num, 6, 4, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform6x6Unit, NULL, NULL, OutputTransform6x4ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight179, m0_weight180, (float *)(m0_buffer + 200704), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 256, 1, 14, 14, 1024, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 200704), (float *)(m0_buffer + 11239424), m0_weight181, m0_weight182, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 401408), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 401408))+0), ((uint8_t *)((float *)(m0_buffer + 1204224))+0), ((uint8_t *)((float *)(m0_buffer + 2007040))+0), 200704, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 49152);
    memset((float *)(m0_buffer + 11288576), 0, 49152);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 1024, 1, 14, 14, 256, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 2007040), (float *)(m0_buffer + 11239424), m0_weight183, m0_weight184, (float *)(m0_buffer + 11288576), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 442368);
    memset((void *)(m0_buffer + 11681792), 0, 442368);
    memset((void *)(m0_buffer + 12124160), 0, 576);
    memset((void *)(m0_buffer + 12124736), 0, 12288);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11681792), (float *)(m0_buffer + 12124160), (float *)(m0_buffer + 12124736)};
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 14, 14, 256, 1, 14, 14, 256, thread_num, 6, 4, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform6x6Unit, NULL, NULL, OutputTransform6x4ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight185, m0_weight186, (float *)(m0_buffer + 200704), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 256, 1, 14, 14, 1024, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 200704), (float *)(m0_buffer + 11239424), m0_weight187, m0_weight188, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 401408), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 401408))+0), ((uint8_t *)((float *)(m0_buffer + 2007040))+0), ((uint8_t *)((float *)(m0_buffer + 1204224))+0), 200704, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 49152);
    memset((float *)(m0_buffer + 11288576), 0, 49152);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 1024, 1, 14, 14, 256, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 1204224), (float *)(m0_buffer + 11239424), m0_weight189, m0_weight190, (float *)(m0_buffer + 11288576), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 442368);
    memset((void *)(m0_buffer + 11681792), 0, 442368);
    memset((void *)(m0_buffer + 12124160), 0, 576);
    memset((void *)(m0_buffer + 12124736), 0, 12288);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11681792), (float *)(m0_buffer + 12124160), (float *)(m0_buffer + 12124736)};
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 14, 14, 256, 1, 14, 14, 256, thread_num, 6, 4, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform6x6Unit, NULL, NULL, OutputTransform6x4ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight191, m0_weight192, (float *)(m0_buffer + 200704), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 12288);
    memset((float *)(m0_buffer + 11251712), 0, 12288);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 256, 1, 14, 14, 1024, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 200704), (float *)(m0_buffer + 11239424), m0_weight193, m0_weight194, (float *)(m0_buffer + 11251712), (float *)(m0_buffer + 401408), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {1, 14, 14, 1024}, 200704, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {200704, 14336, 1024, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 401408))+0), ((uint8_t *)((float *)(m0_buffer + 1204224))+0), ((uint8_t *)((float *)(m0_buffer + 2007040))+0), 200704, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 49152);
    memset((float *)(m0_buffer + 11288576), 0, 49152);
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 1024, 1, 7, 7, 2048, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 2007040), (float *)(m0_buffer + 11239424), m0_weight195, m0_weight196, (float *)(m0_buffer + 11288576), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 49152);
    memset((float *)(m0_buffer + 11288576), 0, 49152);
    int thread_num = MSMIN(m0_thread_num, 14);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 14, 14, 1024, 1, 14, 14, 512, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 2007040), (float *)(m0_buffer + 11239424), m0_weight197, m0_weight198, (float *)(m0_buffer + 11288576), (float *)(m0_buffer + 401408), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 221184);
    memset((float *)(m0_buffer + 11460608), 0, 221184);
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 1, 14, 14, 512, 1, 7, 7, 512, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 401408), (float *)(m0_buffer + 11239424), m0_weight199, m0_weight200, (float *)(m0_buffer + 11460608), (float *)(m0_buffer + 802816), 0, &conv_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 24576);
    memset((float *)(m0_buffer + 11264000), 0, 24576);
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 7, 7, 512, 1, 7, 7, 2048, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 802816), (float *)(m0_buffer + 11239424), m0_weight201, m0_weight202, (float *)(m0_buffer + 11264000), (float *)(m0_buffer + 401408), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 7, 7, 2048}, 100352, {1, 7, 7, 2048}, 100352, {1, 7, 7, 2048}, 100352, {100352, 14336, 2048, 1}, {100352, 14336, 2048, 1}, {100352, 14336, 2048, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 401408))+0), ((uint8_t *)((float *)(m0_buffer + 0))+0), ((uint8_t *)((float *)(m0_buffer + 802816))+0), 100352, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 98304);
    memset((float *)(m0_buffer + 11337728), 0, 98304);
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 7, 7, 2048, 1, 7, 7, 512, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 802816), (float *)(m0_buffer + 11239424), m0_weight203, m0_weight204, (float *)(m0_buffer + 11337728), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 393216);
    memset((void *)(m0_buffer + 11632640), 0, 393216);
    memset((void *)(m0_buffer + 12025856), 0, 256);
    memset((void *)(m0_buffer + 12026112), 0, 24576);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11632640), (float *)(m0_buffer + 12025856), (float *)(m0_buffer + 12026112)};
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 7, 7, 512, 1, 7, 7, 512, thread_num, 4, 2, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform4x4Unit, NULL, NULL, OutputTransform4x2ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight205, m0_weight206, (float *)(m0_buffer + 100352), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 24576);
    memset((float *)(m0_buffer + 11264000), 0, 24576);
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 7, 7, 512, 1, 7, 7, 2048, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 100352), (float *)(m0_buffer + 11239424), m0_weight207, m0_weight208, (float *)(m0_buffer + 11264000), (float *)(m0_buffer + 200704), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 7, 7, 2048}, 100352, {1, 7, 7, 2048}, 100352, {1, 7, 7, 2048}, 100352, {100352, 14336, 2048, 1}, {100352, 14336, 2048, 1}, {100352, 14336, 2048, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 200704))+0), ((uint8_t *)((float *)(m0_buffer + 802816))+0), ((uint8_t *)((float *)(m0_buffer + 1204224))+0), 100352, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 98304);
    memset((float *)(m0_buffer + 11337728), 0, 98304);
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 7, 7, 2048, 1, 7, 7, 512, thread_num, 0, 0, (PadType)(0), (ActType)(1), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 1204224), (float *)(m0_buffer + 11239424), m0_weight209, m0_weight210, (float *)(m0_buffer + 11337728), (float *)(m0_buffer + 0), 0, &conv_parameter);
  }
  {
    memset((void *)(m0_buffer + 11239424), 0, 393216);
    memset((void *)(m0_buffer + 11632640), 0, 393216);
    memset((void *)(m0_buffer + 12025856), 0, 256);
    memset((void *)(m0_buffer + 12026112), 0, 24576);
    float *tmp_buffer_address_list[4] = {(float *)(m0_buffer + 11239424), (float *)(m0_buffer + 11632640), (float *)(m0_buffer + 12025856), (float *)(m0_buffer + 12026112)};
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 7, 7, 512, 1, 7, 7, 512, thread_num, 4, 2, (PadType)(0), (ActType)(1), 0, 0, 0};
    const TransFuncList trans_func = {InputTransform4x4Unit, NULL, NULL, OutputTransform4x2ReluUnit};
    ConvWinogardFp32((float *)(m0_buffer + 0), m0_weight211, m0_weight212, (float *)(m0_buffer + 100352), tmp_buffer_address_list, 0, &conv_parameter, trans_func);
  }
  {
    memset((float *)(m0_buffer + 11239424), 0, 24576);
    memset((float *)(m0_buffer + 11264000), 0, 24576);
    int thread_num = MSMIN(m0_thread_num, 7);
    ConvParameter conv_parameter = {{ "", 35, m0_thread_num, 0}, {0}, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 7, 7, 512, 1, 7, 7, 2048, thread_num, 0, 0, (PadType)(0), (ActType)(0), 0, 0, 0};
    ConvFp32((float *)(m0_buffer + 100352), (float *)(m0_buffer + 11239424), m0_weight213, m0_weight214, (float *)(m0_buffer + 11264000), (float *)(m0_buffer + 200704), 0, &conv_parameter);
  }
  {
    ArithmeticParameter arithmetic_parameter = {{ "", 5, m0_thread_num, 0}, false, 4, 1, {1, 7, 7, 2048}, 100352, {1, 7, 7, 2048}, 100352, {1, 7, 7, 2048}, 100352, {100352, 14336, 2048, 1}, {100352, 14336, 2048, 1}, {100352, 14336, 2048, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    ArithmeticExecute(((uint8_t *)((float *)(m0_buffer + 200704))+0), ((uint8_t *)((float *)(m0_buffer + 1204224))+0), ((uint8_t *)((float *)(m0_buffer + 602112))+0), 100352, false, 0, (void *)(ElementAddRelu), &arithmetic_parameter);
  }
  {
    PoolingParameter pooling_parameter = {{ "", 17, m0_thread_num, 0}, (PoolMode)(2), (RoundType)(2), (PadType)(0), (ActType)(0), 0, true, 7, 7, 1, 1, 0, 0, 0, 0};
    PoolingComputeParam pooling_args = {7, 7, 1, 2048, 1, 1, 1, 2048, 7, 7, -3.40282e+38, 3.40282e+38};
    AvgPooling((float *)(m0_buffer + 602112), (float *)(m0_buffer + 0), &pooling_parameter, &pooling_args, 0, 1);
  }
  {
    PackNHWCToNCHWFp32((float *)(m0_buffer + 0), (float *)(m0_buffer + 8192), 1, 1, 2048, 0, 1);
  }
  {
    memcpy((float *)(m0_buffer + 0), (float *)(m0_buffer + 8192), 8192);
  }
  {
    MicroMatmulParameter mat_mul_parameter = {(ActType)(0), 1, 1, 1000, 0, 0, 0, 0, 1, 0, -1112676093, 1000, 2048, 1043519143, 0, 0, 1, 1, 1, false, true, false, true};
    InitMatrixA((float *)(m0_buffer + 0), (void *)(m0_buffer + 11239424), &mat_mul_parameter, true);
    for (int i = 0; i < 1; ++i) {
      const float *batch_a_ptr = (float *)(m0_buffer + 11239424) + i * 2048;
      const float *batch_b_ptr = m0_weight216;
      float *batch_c_ptr = (float *)(m0_buffer + 8192) + i * 1000;
      MatVecMulFp32(batch_a_ptr, batch_b_ptr, batch_c_ptr, m0_weight215, (ActType)(0), 2048, 1000);
    }
  }
}
