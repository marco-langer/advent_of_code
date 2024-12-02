#include "01.hpp"

#include <range/v3/numeric/accumulate.hpp>
#include <range/v3/view/zip.hpp>

#include <algorithm>
#include <cassert>
#include <cmath>

namespace ml {

int aoc_01(std::vector<int> first, std::vector<int> second)
{
    assert(first.size() == second.size() && "input size mismatch");

    std::ranges::sort(first);
    std::ranges::sort(second);

    auto diff{ [](int lhs, int rhs) { return std::abs(lhs - rhs); } };

    return ranges::accumulate(ranges::view::zip_with(diff, first, second), 0);
}

}   // namespace ml
