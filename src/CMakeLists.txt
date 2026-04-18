# 建议版本：VS2019/2022 默认支持 3.15+，如果是老版本 VS 请改回 3.8
cmake_minimum_required(VERSION 3.28)

# 1. 定义项目
project(ModernCppExamples LANGUAGES CXX)

# 2. 设置默认构建类型
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif ()

# 3. 设置 C++ 标准
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# --- 优化部分 ---

# 获取所有 cpp 文件
# 注意：file(GLOB) 在 VS 中新增文件后可能需要手动重新加载 CMake
file(GLOB SOURCE_FILES "*.cpp")

# 存放所有生成的目标名称
set(ALL_TARGETS "")

foreach (source_file ${SOURCE_FILES})
    # 获取文件名（不含后缀）
    get_filename_component(filename ${source_file} NAME_WE)

    # 创建可执行文件
    add_executable(${filename} ${source_file})

    # 设置输出目录
    set_target_properties(${filename} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    )

    # 将目标加入列表
    list(APPEND ALL_TARGETS ${filename})
endforeach ()

# 创建一个聚合目标，方便一次性构建所有示例
# 这样在 VS 的解决方案资源管理器中，你可以只构建 "build_all_examples"
add_custom_target(build_all_examples ALL
        DEPENDS ${ALL_TARGETS}
)