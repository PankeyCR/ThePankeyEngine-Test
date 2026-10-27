cmake_minimum_required(VERSION 3.15)

project(PankeyEngine_Test)

if(NOT TARGET ThePankeyEngine_Test)

    add_library(ThePankeyEngine_Test INTERFACE)

    target_include_directories(
        ThePankeyEngine_Test
          INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

endif()