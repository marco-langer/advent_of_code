enable_testing()

find_package(GTest CONFIG REQUIRED)

add_executable(aoc_tests
    main.cpp
)

target_link_libraries(aoc_tests PRIVATE ml-aoc GTest::gtest_main)

set_property(TARGET aoc_tests PROPERTY CXX_STANDARD 20)