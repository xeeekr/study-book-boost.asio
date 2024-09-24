cmake_minimum_required(VERSION 3.27)
project(study_book_boost_asio)

set(BOOST_ROOT /opt/homebrew/opt/boost)
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost COMPONENTS system)

set(CMAKE_CXX_STANDARD 17)

include_directories(${Boost_INCLUDE_DIR})

add_subdirectory(./ch1)
