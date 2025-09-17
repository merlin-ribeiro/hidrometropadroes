cmake_minimum_required(VERSION 3.10)
project(HidrometroSim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Encontrar gtkmm
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

include_directories(${GTKMM_INCLUDE_DIRS} src)
link_directories(${GTKMM_LIBRARY_DIRS})

add_executable(hidrometro
    src/main.cpp
    src/Fluxo.cpp
    src/Medicao.cpp
    src/Hidrometro.cpp
    src/HidrometroWindow.cpp
)

target_link_libraries(hidrometro ${GTKMM_LIBRARIES})
