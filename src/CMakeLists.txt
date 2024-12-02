find_package(range-v3 CONFIG REQUIRED)

add_library(ml-aoc STATIC
    01.cpp
    01.hpp
)

target_link_libraries(ml-aoc PRIVATE range-v3::range-v3)

target_include_directories(ml-aoc PUBLIC .)

set_property(TARGET ml-aoc PROPERTY CXX_STANDARD 20)
