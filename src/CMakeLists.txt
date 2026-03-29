cmake_minimum_required(VERSION 3.10)

# 1. 显式定义项目名称和语言（解决那个长长的警告）
project(ModernCppExamples LANGUAGES CXX)

# 2. 如果没指定构建类型，默认设为 Debug（解决代码补全警告）
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# C++ Standard and Flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


# Get all .cpp files in current directory
file(GLOB SOURCE_FILES "*.cpp")

# Create executable targets for each source file
foreach(source_file ${SOURCE_FILES})
    # Extract filename without extension
    get_filename_component(filename ${source_file} NAME_WE)
    
    # Create executable
    add_executable(${filename} ${source_file})
    
    # Set output directory
    set_target_properties(${filename} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    )
endforeach()

# Optional: Create a custom target to build all examples
add_custom_target(build_all_examples ALL)
foreach(source_file ${SOURCE_FILES})
    get_filename_component(filename ${source_file} NAME_WE)
    add_dependencies(build_all_examples ${filename})
endforeach()
