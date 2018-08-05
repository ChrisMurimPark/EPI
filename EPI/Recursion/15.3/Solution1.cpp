//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include <unordered_set>

namespace S1
{
    
void PermutationsHelper(const std::vector<int> &v, std::vector<int> *permutation, std::unordered_set<int> *remaining, std::vector<std::vector<int>> *result)
{
    if (remaining->empty())
    {
        result->emplace_back(*permutation);
        return;
    }
    
    for (const int &i : v)
    {
        if (remaining->find(i) == remaining->end())
            continue; // already used i in permutation
        permutation->push_back(i);
        remaining->erase(i);
        PermutationsHelper(v, permutation, remaining, result);
        permutation->pop_back();
        remaining->emplace(i);
    }
}

std::vector<std::vector<int>> Permutations(const std::vector<int> &v)
{
    std::unordered_set<int> remaining(v.begin(), v.end());
    std::vector<std::vector<int>> result;
    std::vector<int> permutation;
    PermutationsHelper(v, &permutation, &remaining, &result);
    return result;
}

} // namespace S1
