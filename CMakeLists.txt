cmake_minimum_required(VERSION 3.10)
project(FactoryManagementSystem)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(FactoryManagementSystem
    main.cpp
    order.cpp
    order.h
)

# Include directories
target_include_directories(FactoryManagementSystem PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Platform-specific settings
if(MSVC)
    # Visual Studio specific settings
    target_compile_options(FactoryManagementSystem PRIVATE /W4)
else()
    # GCC/Clang settings
    target_compile_options(FactoryManagementSystem PRIVATE -Wall -Wextra -Wpedantic)
endif()
