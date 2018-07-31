//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/25/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include <set>

namespace S1
{

// N = n (function param)
// time: O(2^N)
// space: O(N)
void TowersOfHanoi(const size_t n, const size_t start, const size_t end, std::vector<std::pair<size_t, size_t>> &result)
{
    if (n <= 0)
        return;
    std::set<const size_t> pegs = {0, 1, 2};
    if (pegs.find(start) == pegs.end() || pegs.find(end) == pegs.end())
        throw std::exception();
    pegs.erase(start);
    pegs.erase(end);
    const size_t other = *pegs.cbegin();
    TowersOfHanoi(n-1, start, other, result);
    result.emplace_back(std::make_pair(start, end));
    TowersOfHanoi(n-1, other, end, result);
}

} // namespace S1
