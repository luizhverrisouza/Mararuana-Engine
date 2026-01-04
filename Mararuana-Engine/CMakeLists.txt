# Subproject CMake file for Mararuana-Engine
# Add sources, targets and project-specific settings.

# Add executable target and its source files
set(LIB_NAME Mararuana-Engine)

add_library(${LIB_NAME} STATIC)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# Isso executa cmake/spdlog.cmake
include(spdlog)

target_sources(${LIB_NAME}
  PRIVATE
    src/Mararuana/Application.cpp
    src/Mararuana/Log.cpp
  PUBLIC
    FILE_SET HEADERS
      BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/src
      FILES
        src/Mararuana/Application.h
        src/Mararuana/Core.h
        src/Mararuana.h
        src/Mararuana/Log.h
        src/Mararuana/EntryPoint.h
)

target_link_libraries(${LIB_NAME}
  PUBLIC
    spdlog::spdlog
)
