//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/16/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

namespace S1
{
    
std::vector<int> CalculateSortedIntersection(const std::vector<int> &a, const std::vector<int> &b)
{
    std::vector<int> result;
    const size_t a_size = a.size(), b_size = b.size();
    size_t i = 0, j = 0;
    while (i < a_size && j < b_size)
    {
        if (a[i] == b[j] && (result.size() == 0 || *result.rbegin() != a[i]))
        {
            result.emplace_back(a[i]);
            ++i; ++j;
        }
        else if (a[i] < b[j])
            ++i;
        else // a[i] > b[j]
            ++j;
    }
    return result;
}
    
} // namespace S1
