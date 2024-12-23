include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../)
set(OP_SRC
    add_fp32.c.o
    arithmetic_fp32_wrapper.c.o
    common_func.c.o
    common_func_fp32.c.o
    conv_common_base.c.o
    conv_common_fp32.c.o
    conv_int8.c.o
    conv_winograd_fp32.c.o
    fixed_point.c.o
    matmul_fp32.c.o
    matmul_fp32_wrapper.c.o
    matmul_int8.c.o
    minimal_filtering_generator.c.o
    pack_fp32.c.o
    pooling_fp32.c.o
    pooling_fp32_wrapper.c.o
    transpose_fp32.c.o
    transpose_fp32_wrapper.c.o
    winograd_transform.c.o
    winograd_utils.c.o
    weight0.c.o
    net0.c.o
    model0.c.o
    model.c.o
    context.c.o
    tensor.c.o
    allocator.c.o
)
file(GLOB_RECURSE NET_SRC
     ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
     ${CMAKE_CURRENT_SOURCE_DIR}/*.c
     )
add_library(net STATIC ${NET_SRC})
