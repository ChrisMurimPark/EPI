//
//  ThreeSum.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/21/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "ThreeSum.hpp"
#include <algorithm>

namespace S1
{
    
bool ThreeSumExists(std::vector<int> v, const int sum)
{
    std::sort(v.begin(), v.end());
    for (const int e : v)
    {
        size_t i = 0, j = v.size() - 1;
        while (i <= j)
        {
            int current_sum = v[i] + v[j] + e;
            if (current_sum == sum)
                return true;
            else if (current_sum > sum)
                --j;
            else // if current_sum < sum
                ++i;
        }
    }
    return false;
}
    
} // namespace S1
