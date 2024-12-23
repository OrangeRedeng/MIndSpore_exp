
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
#include <stdio.h>

int  m0_thread_num = 1; 
extern const unsigned char *m0_input0;
unsigned char *m0_buffer = 0; 
unsigned char *m0_weight = 0; 
int *m0_shape = 0; 
int *m0_offset = 0; 
float *m0_weight109 = NULL;
float *m0_weight110 = NULL;
float *m0_weight111 = NULL;
float *m0_weight112 = NULL;
float *m0_weight113 = NULL;
float *m0_weight114 = NULL;
float m0_weight115[262144];
float m0_weight116[64];
float *m0_weight117 = NULL;
float *m0_weight118 = NULL;
float *m0_weight119 = NULL;
float *m0_weight120 = NULL;
float m0_weight121[262144];
float m0_weight122[64];
float *m0_weight123 = NULL;
float *m0_weight124 = NULL;
float *m0_weight125 = NULL;
float *m0_weight126 = NULL;
float m0_weight127[262144];
float m0_weight128[64];
float *m0_weight129 = NULL;
float *m0_weight130 = NULL;
float *m0_weight131 = NULL;
float *m0_weight132 = NULL;
float *m0_weight133 = NULL;
float *m0_weight134 = NULL;
float *m0_weight135 = NULL;
float *m0_weight136 = NULL;
float *m0_weight137 = NULL;
float *m0_weight138 = NULL;
float *m0_weight139 = NULL;
float *m0_weight140 = NULL;
float m0_weight141[1048576];
float m0_weight142[128];
float *m0_weight143 = NULL;
float *m0_weight144 = NULL;
float *m0_weight145 = NULL;
float *m0_weight146 = NULL;
float m0_weight147[1048576];
float m0_weight148[128];
float *m0_weight149 = NULL;
float *m0_weight150 = NULL;
float *m0_weight151 = NULL;
float *m0_weight152 = NULL;
float m0_weight153[1048576];
float m0_weight154[128];
float *m0_weight155 = NULL;
float *m0_weight156 = NULL;
float *m0_weight157 = NULL;
float *m0_weight158 = NULL;
float *m0_weight159 = NULL;
float *m0_weight160 = NULL;
float *m0_weight161 = NULL;
float *m0_weight162 = NULL;
float *m0_weight163 = NULL;
float *m0_weight164 = NULL;
float *m0_weight165 = NULL;
float *m0_weight166 = NULL;
float m0_weight167[2359296];
float m0_weight168[256];
float *m0_weight169 = NULL;
float *m0_weight170 = NULL;
float *m0_weight171 = NULL;
float *m0_weight172 = NULL;
float m0_weight173[2359296];
float m0_weight174[256];
float *m0_weight175 = NULL;
float *m0_weight176 = NULL;
float *m0_weight177 = NULL;
float *m0_weight178 = NULL;
float m0_weight179[2359296];
float m0_weight180[256];
float *m0_weight181 = NULL;
float *m0_weight182 = NULL;
float *m0_weight183 = NULL;
float *m0_weight184 = NULL;
float m0_weight185[2359296];
float m0_weight186[256];
float *m0_weight187 = NULL;
float *m0_weight188 = NULL;
float *m0_weight189 = NULL;
float *m0_weight190 = NULL;
float m0_weight191[2359296];
float m0_weight192[256];
float *m0_weight193 = NULL;
float *m0_weight194 = NULL;
float *m0_weight195 = NULL;
float *m0_weight196 = NULL;
float *m0_weight197 = NULL;
float *m0_weight198 = NULL;
float *m0_weight199 = NULL;
float *m0_weight200 = NULL;
float *m0_weight201 = NULL;
float *m0_weight202 = NULL;
float *m0_weight203 = NULL;
float *m0_weight204 = NULL;
float m0_weight205[4194304];
float m0_weight206[512];
float *m0_weight207 = NULL;
float *m0_weight208 = NULL;
float *m0_weight209 = NULL;
float *m0_weight210 = NULL;
float m0_weight211[4194304];
float m0_weight212[512];
float *m0_weight213 = NULL;
float *m0_weight214 = NULL;
float *m0_weight215 = NULL;
float *m0_weight216 = NULL;

static size_t PackWeightSize0() {
  size_t w_size = 0;
  w_size += 69227680;
  return w_size;
}

int Init0(void *weight_buffer, int weight_size) {
  if (weight_buffer == NULL) {
    return RET_ERROR;
  }
  struct ModelParameter {
    void *addr;
    size_t size;
    size_t offset;
  };
  size_t w_size = PackWeightSize0();
  float *m0_weight0 = (weight_buffer + 0);
  float *m0_weight1 = (weight_buffer + 37632);
  float *m0_weight10 = (weight_buffer + 37888);
  float *m0_weight100 = (weight_buffer + 103424);
  float *m0_weight101 = (weight_buffer + 4297728);
  float *m0_weight104 = (weight_buffer + 4299776);
  float *m0_weight105 = (weight_buffer + 8494080);
  float *m0_weight107 = (weight_buffer + 8502272);
  float *m0_weight108 = (weight_buffer + 16694272);
  float *m0_weight11 = (weight_buffer + 16698272);
  float *m0_weight14 = (weight_buffer + 19845024);
  float *m0_weight15 = (weight_buffer + 28300192);
  float *m0_weight16 = (weight_buffer + 32496032);
  float *m0_weight17 = (weight_buffer + 41999776);
  float *m0_weight2 = (weight_buffer + 79752864);
  float *m0_weight20 = (weight_buffer + 79818400);
  float *m0_weight21 = (weight_buffer + 96663200);
  float *m0_weight22 = (weight_buffer + 113443488);
  float *m0_weight23 = (weight_buffer + 113967776);
  float *m0_weight24 = (weight_buffer + 113969824);
  float *m0_weight25 = (weight_buffer + 114100896);
  float *m0_weight26 = (weight_buffer + 114101408);
  float *m0_weight27 = (weight_buffer + 114691232);
  float *m0_weight28 = (weight_buffer + 114691744);
  float *m0_weight29 = (weight_buffer + 114953888);
  float *m0_weight3 = (weight_buffer + 114955936);
  float *m0_weight30 = (weight_buffer + 114956960);
  float *m0_weight31 = (weight_buffer + 115219104);
  float *m0_weight34 = (weight_buffer + 115219616);
  float *m0_weight35 = (weight_buffer + 115481760);
  float *m0_weight36 = (weight_buffer + 115483808);
  float *m0_weight37 = (weight_buffer + 115745952);
  float *m0_weight4 = (weight_buffer + 115746464);
  float *m0_weight40 = (weight_buffer + 115762848);
  float *m0_weight41 = (weight_buffer + 116024992);
  float *m0_weight42 = (weight_buffer + 116027040);
  float *m0_weight43 = (weight_buffer + 116289184);
  float *m0_weight46 = (weight_buffer + 116289696);
  float *m0_weight47 = (weight_buffer + 116551840);
  float *m0_weight48 = (weight_buffer + 116553888);
  float *m0_weight49 = (weight_buffer + 118651040);
  float *m0_weight5 = (weight_buffer + 118655136);
  float *m0_weight50 = (weight_buffer + 118655392);
  float *m0_weight51 = (weight_buffer + 119179680);
  float *m0_weight52 = (weight_buffer + 119180704);
  float *m0_weight53 = (weight_buffer + 121540000);
  float *m0_weight54 = (weight_buffer + 121541024);
  float *m0_weight55 = (weight_buffer + 122589600);
  float *m0_weight56 = (weight_buffer + 122593696);
  float *m0_weight57 = (weight_buffer + 123642272);
  float *m0_weight60 = (weight_buffer + 123643296);
  float *m0_weight61 = (weight_buffer + 124691872);
  float *m0_weight62 = (weight_buffer + 124695968);
  float *m0_weight63 = (weight_buffer + 125744544);
  float *m0_weight66 = (weight_buffer + 125745568);
  float *m0_weight67 = (weight_buffer + 126794144);
  float *m0_weight68 = (weight_buffer + 126798240);
  float *m0_weight69 = (weight_buffer + 127846816);
  float *m0_weight72 = (weight_buffer + 127847840);
  float *m0_weight73 = (weight_buffer + 128896416);
  float *m0_weight74 = (weight_buffer + 128900512);
  float *m0_weight75 = (weight_buffer + 129949088);
  float *m0_weight78 = (weight_buffer + 129950112);
  float *m0_weight79 = (weight_buffer + 130998688);
  float *m0_weight8 = (weight_buffer + 131002784);
  float *m0_weight80 = (weight_buffer + 131068320);
  float *m0_weight81 = (weight_buffer + 132116896);
  float *m0_weight84 = (weight_buffer + 132117920);
  float *m0_weight85 = (weight_buffer + 133166496);
  float *m0_weight86 = (weight_buffer + 133170592);
  float *m0_weight87 = (weight_buffer + 141559200);
  float *m0_weight88 = (weight_buffer + 141567392);
  float *m0_weight89 = (weight_buffer + 143664544);
  float *m0_weight9 = (weight_buffer + 143666592);
  float *m0_weight90 = (weight_buffer + 143667616);
  float *m0_weight91 = (weight_buffer + 153104800);
  float *m0_weight92 = (weight_buffer + 153106848);
  float *m0_weight93 = (weight_buffer + 157301152);
  float *m0_weight94 = (weight_buffer + 157309344);
  float *m0_weight95 = (weight_buffer + 161503648);
  float *m0_weight98 = (weight_buffer + 161505696);
  float *m0_weight99 = (weight_buffer + 165700000);

  struct ModelParameter model_params[] = {
    {m0_weight115, 1048576, 16698528},
    {m0_weight116, 256, 17747104},
    {m0_weight121, 1048576, 17747360},
    {m0_weight122, 256, 18795936},
    {m0_weight127, 1048576, 18796192},
    {m0_weight128, 256, 19844768},
    {m0_weight141, 4194304, 19910560},
    {m0_weight142, 512, 24104864},
    {m0_weight147, 4194304, 24105376},
    {m0_weight148, 512, 28299680},
    {m0_weight153, 4194304, 28301216},
    {m0_weight154, 512, 32495520},
    {m0_weight167, 9437184, 32561568},
    {m0_weight168, 1024, 41998752},
    {m0_weight173, 9437184, 42000032},
    {m0_weight174, 1024, 51437216},
    {m0_weight179, 9437184, 51438240},
    {m0_weight180, 1024, 60875424},
    {m0_weight185, 9437184, 60876448},
    {m0_weight186, 1024, 70313632},
    {m0_weight191, 9437184, 70314656},
    {m0_weight192, 1024, 79751840},
    {m0_weight205, 16777216, 79883936},
    {m0_weight206, 2048, 96661152},
    {m0_weight211, 16777216, 96664224},
    {m0_weight212, 2048, 113441440},
  };

  for(int i = 0; i < 26; ++i) {
    if (model_params[i].offset + model_params[i].size > weight_size) {
      return RET_ERROR;
    }
    memcpy(model_params[i].addr, (weight_buffer + model_params[i].offset), model_params[i].size);
  }
  if (w_size > 0) {
    m0_weight = malloc(w_size);
    if (m0_weight == NULL) {
      return RET_ERROR;
    }
    memset(m0_weight, 0, w_size);
  }
  size_t w_offset = 0;

{
m0_weight109 = ( (w_offset + 37632) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight109 == NULL) {
  return RET_ERROR;
}
w_offset += 37632;
    RowMajor2Col8Major(m0_weight0, m0_weight109, 64, 147);
m0_weight110 = ( (w_offset + 256) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight110 == NULL) {
  return RET_ERROR;
}
w_offset += 256;
    memcpy(m0_weight110, m0_weight1, 256);
}

{
m0_weight111 = ( (w_offset + 65536) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight111 == NULL) {
  return RET_ERROR;
}
w_offset += 65536;
    RowMajor2Col8Major(m0_weight2, m0_weight111, 256, 64);
m0_weight112 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight112 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight112, m0_weight3, 1024);
}

{
m0_weight113 = ( (w_offset + 16384) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight113 == NULL) {
  return RET_ERROR;
}
w_offset += 16384;
    RowMajor2Col8Major(m0_weight4, m0_weight113, 64, 64);
m0_weight114 = ( (w_offset + 256) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight114 == NULL) {
  return RET_ERROR;
}
w_offset += 256;
    memcpy(m0_weight114, m0_weight5, 256);
}

{
m0_weight117 = ( (w_offset + 65536) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight117 == NULL) {
  return RET_ERROR;
}
w_offset += 65536;
    RowMajor2Col8Major(m0_weight8, m0_weight117, 256, 64);
m0_weight118 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight118 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight118, m0_weight9, 1024);
}

{
m0_weight119 = ( (w_offset + 65536) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight119 == NULL) {
  return RET_ERROR;
}
w_offset += 65536;
    RowMajor2Col8Major(m0_weight10, m0_weight119, 64, 256);
m0_weight120 = ( (w_offset + 256) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight120 == NULL) {
  return RET_ERROR;
}
w_offset += 256;
    memcpy(m0_weight120, m0_weight11, 256);
}

{
m0_weight123 = ( (w_offset + 65536) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight123 == NULL) {
  return RET_ERROR;
}
w_offset += 65536;
    RowMajor2Col8Major(m0_weight14, m0_weight123, 256, 64);
m0_weight124 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight124 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight124, m0_weight15, 1024);
}

{
m0_weight125 = ( (w_offset + 65536) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight125 == NULL) {
  return RET_ERROR;
}
w_offset += 65536;
    RowMajor2Col8Major(m0_weight16, m0_weight125, 64, 256);
m0_weight126 = ( (w_offset + 256) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight126 == NULL) {
  return RET_ERROR;
}
w_offset += 256;
    memcpy(m0_weight126, m0_weight17, 256);
}

{
m0_weight129 = ( (w_offset + 65536) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight129 == NULL) {
  return RET_ERROR;
}
w_offset += 65536;
    RowMajor2Col8Major(m0_weight20, m0_weight129, 256, 64);
m0_weight130 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight130 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight130, m0_weight21, 1024);
}

{
m0_weight131 = ( (w_offset + 524288) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight131 == NULL) {
  return RET_ERROR;
}
w_offset += 524288;
    RowMajor2Col8Major(m0_weight22, m0_weight131, 512, 256);
m0_weight132 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight132 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight132, m0_weight23, 2048);
}

{
m0_weight133 = ( (w_offset + 131072) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight133 == NULL) {
  return RET_ERROR;
}
w_offset += 131072;
    RowMajor2Col8Major(m0_weight24, m0_weight133, 128, 256);
m0_weight134 = ( (w_offset + 512) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight134 == NULL) {
  return RET_ERROR;
}
w_offset += 512;
    memcpy(m0_weight134, m0_weight25, 512);
}

{
m0_weight135 = ( (w_offset + 589824) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight135 == NULL) {
  return RET_ERROR;
}
w_offset += 589824;
    RowMajor2Col8Major(m0_weight26, m0_weight135, 128, 1152);
m0_weight136 = ( (w_offset + 512) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight136 == NULL) {
  return RET_ERROR;
}
w_offset += 512;
    memcpy(m0_weight136, m0_weight27, 512);
}

{
m0_weight137 = ( (w_offset + 262144) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight137 == NULL) {
  return RET_ERROR;
}
w_offset += 262144;
    RowMajor2Col8Major(m0_weight28, m0_weight137, 512, 128);
m0_weight138 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight138 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight138, m0_weight29, 2048);
}

{
m0_weight139 = ( (w_offset + 262144) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight139 == NULL) {
  return RET_ERROR;
}
w_offset += 262144;
    RowMajor2Col8Major(m0_weight30, m0_weight139, 128, 512);
m0_weight140 = ( (w_offset + 512) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight140 == NULL) {
  return RET_ERROR;
}
w_offset += 512;
    memcpy(m0_weight140, m0_weight31, 512);
}

{
m0_weight143 = ( (w_offset + 262144) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight143 == NULL) {
  return RET_ERROR;
}
w_offset += 262144;
    RowMajor2Col8Major(m0_weight34, m0_weight143, 512, 128);
m0_weight144 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight144 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight144, m0_weight35, 2048);
}

{
m0_weight145 = ( (w_offset + 262144) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight145 == NULL) {
  return RET_ERROR;
}
w_offset += 262144;
    RowMajor2Col8Major(m0_weight36, m0_weight145, 128, 512);
m0_weight146 = ( (w_offset + 512) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight146 == NULL) {
  return RET_ERROR;
}
w_offset += 512;
    memcpy(m0_weight146, m0_weight37, 512);
}

{
m0_weight149 = ( (w_offset + 262144) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight149 == NULL) {
  return RET_ERROR;
}
w_offset += 262144;
    RowMajor2Col8Major(m0_weight40, m0_weight149, 512, 128);
m0_weight150 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight150 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight150, m0_weight41, 2048);
}

{
m0_weight151 = ( (w_offset + 262144) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight151 == NULL) {
  return RET_ERROR;
}
w_offset += 262144;
    RowMajor2Col8Major(m0_weight42, m0_weight151, 128, 512);
m0_weight152 = ( (w_offset + 512) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight152 == NULL) {
  return RET_ERROR;
}
w_offset += 512;
    memcpy(m0_weight152, m0_weight43, 512);
}

{
m0_weight155 = ( (w_offset + 262144) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight155 == NULL) {
  return RET_ERROR;
}
w_offset += 262144;
    RowMajor2Col8Major(m0_weight46, m0_weight155, 512, 128);
m0_weight156 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight156 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight156, m0_weight47, 2048);
}

{
m0_weight157 = ( (w_offset + 2097152) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight157 == NULL) {
  return RET_ERROR;
}
w_offset += 2097152;
    RowMajor2Col8Major(m0_weight48, m0_weight157, 1024, 512);
m0_weight158 = ( (w_offset + 4096) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight158 == NULL) {
  return RET_ERROR;
}
w_offset += 4096;
    memcpy(m0_weight158, m0_weight49, 4096);
}

{
m0_weight159 = ( (w_offset + 524288) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight159 == NULL) {
  return RET_ERROR;
}
w_offset += 524288;
    RowMajor2Col8Major(m0_weight50, m0_weight159, 256, 512);
m0_weight160 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight160 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight160, m0_weight51, 1024);
}

{
m0_weight161 = ( (w_offset + 2359296) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight161 == NULL) {
  return RET_ERROR;
}
w_offset += 2359296;
    RowMajor2Col8Major(m0_weight52, m0_weight161, 256, 2304);
m0_weight162 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight162 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight162, m0_weight53, 1024);
}

{
m0_weight163 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight163 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight54, m0_weight163, 1024, 256);
m0_weight164 = ( (w_offset + 4096) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight164 == NULL) {
  return RET_ERROR;
}
w_offset += 4096;
    memcpy(m0_weight164, m0_weight55, 4096);
}

{
m0_weight165 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight165 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight56, m0_weight165, 256, 1024);
m0_weight166 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight166 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight166, m0_weight57, 1024);
}

{
m0_weight169 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight169 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight60, m0_weight169, 1024, 256);
m0_weight170 = ( (w_offset + 4096) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight170 == NULL) {
  return RET_ERROR;
}
w_offset += 4096;
    memcpy(m0_weight170, m0_weight61, 4096);
}

{
m0_weight171 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight171 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight62, m0_weight171, 256, 1024);
m0_weight172 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight172 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight172, m0_weight63, 1024);
}

{
m0_weight175 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight175 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight66, m0_weight175, 1024, 256);
m0_weight176 = ( (w_offset + 4096) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight176 == NULL) {
  return RET_ERROR;
}
w_offset += 4096;
    memcpy(m0_weight176, m0_weight67, 4096);
}

{
m0_weight177 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight177 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight68, m0_weight177, 256, 1024);
m0_weight178 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight178 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight178, m0_weight69, 1024);
}

{
m0_weight181 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight181 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight72, m0_weight181, 1024, 256);
m0_weight182 = ( (w_offset + 4096) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight182 == NULL) {
  return RET_ERROR;
}
w_offset += 4096;
    memcpy(m0_weight182, m0_weight73, 4096);
}

{
m0_weight183 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight183 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight74, m0_weight183, 256, 1024);
m0_weight184 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight184 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight184, m0_weight75, 1024);
}

{
m0_weight187 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight187 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight78, m0_weight187, 1024, 256);
m0_weight188 = ( (w_offset + 4096) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight188 == NULL) {
  return RET_ERROR;
}
w_offset += 4096;
    memcpy(m0_weight188, m0_weight79, 4096);
}

{
m0_weight189 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight189 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight80, m0_weight189, 256, 1024);
m0_weight190 = ( (w_offset + 1024) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight190 == NULL) {
  return RET_ERROR;
}
w_offset += 1024;
    memcpy(m0_weight190, m0_weight81, 1024);
}

{
m0_weight193 = ( (w_offset + 1048576) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight193 == NULL) {
  return RET_ERROR;
}
w_offset += 1048576;
    RowMajor2Col8Major(m0_weight84, m0_weight193, 1024, 256);
m0_weight194 = ( (w_offset + 4096) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight194 == NULL) {
  return RET_ERROR;
}
w_offset += 4096;
    memcpy(m0_weight194, m0_weight85, 4096);
}

{
m0_weight195 = ( (w_offset + 8388608) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight195 == NULL) {
  return RET_ERROR;
}
w_offset += 8388608;
    RowMajor2Col8Major(m0_weight86, m0_weight195, 2048, 1024);
m0_weight196 = ( (w_offset + 8192) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight196 == NULL) {
  return RET_ERROR;
}
w_offset += 8192;
    memcpy(m0_weight196, m0_weight87, 8192);
}

{
m0_weight197 = ( (w_offset + 2097152) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight197 == NULL) {
  return RET_ERROR;
}
w_offset += 2097152;
    RowMajor2Col8Major(m0_weight88, m0_weight197, 512, 1024);
m0_weight198 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight198 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight198, m0_weight89, 2048);
}

{
m0_weight199 = ( (w_offset + 9437184) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight199 == NULL) {
  return RET_ERROR;
}
w_offset += 9437184;
    RowMajor2Col8Major(m0_weight90, m0_weight199, 512, 4608);
m0_weight200 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight200 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight200, m0_weight91, 2048);
}

{
m0_weight201 = ( (w_offset + 4194304) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight201 == NULL) {
  return RET_ERROR;
}
w_offset += 4194304;
    RowMajor2Col8Major(m0_weight92, m0_weight201, 2048, 512);
m0_weight202 = ( (w_offset + 8192) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight202 == NULL) {
  return RET_ERROR;
}
w_offset += 8192;
    memcpy(m0_weight202, m0_weight93, 8192);
}

{
m0_weight203 = ( (w_offset + 4194304) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight203 == NULL) {
  return RET_ERROR;
}
w_offset += 4194304;
    RowMajor2Col8Major(m0_weight94, m0_weight203, 512, 2048);
m0_weight204 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight204 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight204, m0_weight95, 2048);
}

{
m0_weight207 = ( (w_offset + 4194304) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight207 == NULL) {
  return RET_ERROR;
}
w_offset += 4194304;
    RowMajor2Col8Major(m0_weight98, m0_weight207, 2048, 512);
m0_weight208 = ( (w_offset + 8192) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight208 == NULL) {
  return RET_ERROR;
}
w_offset += 8192;
    memcpy(m0_weight208, m0_weight99, 8192);
}

{
m0_weight209 = ( (w_offset + 4194304) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight209 == NULL) {
  return RET_ERROR;
}
w_offset += 4194304;
    RowMajor2Col8Major(m0_weight100, m0_weight209, 512, 2048);
m0_weight210 = ( (w_offset + 2048) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight210 == NULL) {
  return RET_ERROR;
}
w_offset += 2048;
    memcpy(m0_weight210, m0_weight101, 2048);
}

{
m0_weight213 = ( (w_offset + 4194304) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight213 == NULL) {
  return RET_ERROR;
}
w_offset += 4194304;
    RowMajor2Col8Major(m0_weight104, m0_weight213, 2048, 512);
m0_weight214 = ( (w_offset + 8192) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight214 == NULL) {
  return RET_ERROR;
}
w_offset += 8192;
    memcpy(m0_weight214, m0_weight105, 8192);
}

{
m0_weight215 = ( (w_offset + 4000) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight215 == NULL) {
  return RET_ERROR;
}
w_offset += 4000;
    memcpy(m0_weight215, m0_weight108, 4000);
    MicroMatmulParameter mat_mul_parameter = {(ActType)(0), 1, 1, 1000, 0, 0, 0, 0, 1, 0, -1112676093, 1000, 2048, 1043519143, 0, 0, 1, 1, 1, false, true, false, true};
m0_weight216 = ( (w_offset + 8192000) <= w_size) ? (void*)(m0_weight + w_offset) : NULL;
if (m0_weight216 == NULL) {
  return RET_ERROR;
}
w_offset += 8192000;
    InitMatrixB(m0_weight107, m0_weight216, &mat_mul_parameter, true);
}
  if (w_size < w_offset) {
    return RET_ERROR;
  }
  return RET_OK;
}

