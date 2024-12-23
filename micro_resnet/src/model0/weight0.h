
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
#include "nnacl/common_func.h"
#include "nnacl/conv_parameter.h"
#include "nnacl/errorcode.h"
#include "nnacl/fp32/add_fp32.h"
#include "nnacl/fp32/conv_common_fp32.h"
#include "nnacl/fp32/conv_winograd_fp32.h"
#include "nnacl/fp32/matmul_fp32.h"
#include "nnacl/fp32/pack_fp32.h"
#include "nnacl/fp32/pooling_fp32.h"
#include "nnacl/fp32/transpose_fp32.h"
#include "nnacl/kernel/pooling.h"
#include "nnacl/op_base.h"
#include "nnacl/transpose_parameter.h"
#include "wrapper/fp32/arithmetic_fp32_wrapper.h"
#include "wrapper/fp32/matmul_fp32_wrapper.h"
#include "wrapper/fp32/pooling_fp32_wrapper.h"
#include "wrapper/fp32/transpose_fp32_wrapper.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
extern unsigned char *m0_buffer;
extern uint8_t *m0_weight;
extern int *m0_shape;
extern int *m0_offset;
enum STATUS {
  RET_OK = 0,
  RET_ERROR = 1,
};

extern int m0_thread_num;
extern float *m0_weight109;  // 
extern float *m0_weight110;  // 
extern float *m0_weight111;  // 
extern float *m0_weight112;  // 
extern float *m0_weight113;  // 
extern float *m0_weight114;  // 
extern float m0_weight115[];  // 
extern float m0_weight116[];  // 
extern float *m0_weight117;  // 
extern float *m0_weight118;  // 
extern float *m0_weight119;  // 
extern float *m0_weight120;  // 
extern float m0_weight121[];  // 
extern float m0_weight122[];  // 
extern float *m0_weight123;  // 
extern float *m0_weight124;  // 
extern float *m0_weight125;  // 
extern float *m0_weight126;  // 
extern float m0_weight127[];  // 
extern float m0_weight128[];  // 
extern float *m0_weight129;  // 
extern float *m0_weight130;  // 
extern float *m0_weight131;  // 
extern float *m0_weight132;  // 
extern float *m0_weight133;  // 
extern float *m0_weight134;  // 
extern float *m0_weight135;  // 
extern float *m0_weight136;  // 
extern float *m0_weight137;  // 
extern float *m0_weight138;  // 
extern float *m0_weight139;  // 
extern float *m0_weight140;  // 
extern float m0_weight141[];  // 
extern float m0_weight142[];  // 
extern float *m0_weight143;  // 
extern float *m0_weight144;  // 
extern float *m0_weight145;  // 
extern float *m0_weight146;  // 
extern float m0_weight147[];  // 
extern float m0_weight148[];  // 
extern float *m0_weight149;  // 
extern float *m0_weight150;  // 
extern float *m0_weight151;  // 
extern float *m0_weight152;  // 
extern float m0_weight153[];  // 
extern float m0_weight154[];  // 
extern float *m0_weight155;  // 
extern float *m0_weight156;  // 
extern float *m0_weight157;  // 
extern float *m0_weight158;  // 
extern float *m0_weight159;  // 
extern float *m0_weight160;  // 
extern float *m0_weight161;  // 
extern float *m0_weight162;  // 
extern float *m0_weight163;  // 
extern float *m0_weight164;  // 
extern float *m0_weight165;  // 
extern float *m0_weight166;  // 
extern float m0_weight167[];  // 
extern float m0_weight168[];  // 
extern float *m0_weight169;  // 
extern float *m0_weight170;  // 
extern float *m0_weight171;  // 
extern float *m0_weight172;  // 
extern float m0_weight173[];  // 
extern float m0_weight174[];  // 
extern float *m0_weight175;  // 
extern float *m0_weight176;  // 
extern float *m0_weight177;  // 
extern float *m0_weight178;  // 
extern float m0_weight179[];  // 
extern float m0_weight180[];  // 
extern float *m0_weight181;  // 
extern float *m0_weight182;  // 
extern float *m0_weight183;  // 
extern float *m0_weight184;  // 
extern float m0_weight185[];  // 
extern float m0_weight186[];  // 
extern float *m0_weight187;  // 
extern float *m0_weight188;  // 
extern float *m0_weight189;  // 
extern float *m0_weight190;  // 
extern float m0_weight191[];  // 
extern float m0_weight192[];  // 
extern float *m0_weight193;  // 
extern float *m0_weight194;  // 
extern float *m0_weight195;  // 
extern float *m0_weight196;  // 
extern float *m0_weight197;  // 
extern float *m0_weight198;  // 
extern float *m0_weight199;  // 
extern float *m0_weight200;  // 
extern float *m0_weight201;  // 
extern float *m0_weight202;  // 
extern float *m0_weight203;  // 
extern float *m0_weight204;  // 
extern float m0_weight205[];  // 
extern float m0_weight206[];  // 
extern float *m0_weight207;  // 
extern float *m0_weight208;  // 
extern float *m0_weight209;  // 
extern float *m0_weight210;  // 
extern float m0_weight211[];  // 
extern float m0_weight212[];  // 
extern float *m0_weight213;  // 
extern float *m0_weight214;  // 
extern float *m0_weight215;  // fc.bias_online_pack
extern float *m0_weight216;  // fc.weight_online_pack
/// \brief Init model weight from buffer.

/// \param[in] weight_buffer The address of the weight binary file.
/// \param[in] weight_size The size of the weight file in bytes.
int Init0(void *weight_buffer, int weight_size);

