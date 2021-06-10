cmake_minimum_required(VERSION 3.17)
project(TronGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(TronGame main.cpp GameEngine.h GameEngine.cpp Board.cpp Board.h GameEngine.cpp GameEngine.h Player.cpp Player.h)

include_directories( C:/SFML-2.5.1/include)
set(SFML_ROOT C:/SFML-2.5.1)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(TronGame ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif()

# Copy dlls to build
if(WIN32)
    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
    file(GLOB MINGW_DEP_DLLS "C:/mingw64/bin/*.dll")
    file(COPY ${MINGW_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()