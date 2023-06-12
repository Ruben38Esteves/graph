cmake_minimum_required(VERSION 3.16.3)
project(GraphProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(GraphProject main.cpp src/menus.h src/menus.cpp src/utils.h src/utils.cpp src/VertexEdge.h src/VertexEdge.cpp src/graph.h src/graph.cpp)
