#include "01.hpp"

#include <gtest/gtest.h>

#include <vector>

TEST(aoc, aoc_01)
{
    std::vector first{ 3, 4, 2, 1, 3, 3 };
    std::vector second{ 4, 3, 5, 3, 9, 3 };

    const int result{ ml::aoc_01(first, second) };

    EXPECT_EQ(result, 11);
}
