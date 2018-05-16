//
//  NumCombinations.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 5/15/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "NumCombinations.hpp"

#include <unordered_map>
#include <vector>

unsigned int NumCombinations(unsigned int n, unsigned int k)
{
    if (k > n)
        return 0;
    if (k == n || k == 0)
        return 1;
    std::unordered_map<unsigned int, std::vector<unsigned int>> pascals;
    for (unsigned int i = 0; i <= n; ++i)
    {
        pascals[i] = std::vector<unsigned int>();
        for (unsigned int j = 0; j < i + 1; ++j)
        {
            if (pascals.find(i-1) == pascals.end())
                pascals[i].emplace_back(1);
            else
            {
                unsigned int value = 0;
                if (j < pascals[i-1].size())
                    value += pascals[i-1].at(j);
                if (j != 0 && j <= pascals[i-1].size())
                    value += pascals[i-1].at(j - 1);
                pascals[i].emplace_back(value);
            }
        }
    }
    return pascals[n][k];
}
