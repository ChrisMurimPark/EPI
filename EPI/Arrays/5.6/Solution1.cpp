//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 2/11/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//
// N = elements in the array
// time: O(N)
// space: O(1)

#include "Solution1.hpp"

namespace S1
{
    
unsigned int ComputeMaxProfit(const std::vector<unsigned int> &prices)
{
    if (prices.size() == 0)
        return 0;
    unsigned int max_profit = 0;
    unsigned int lowest = prices[0];
    for (size_t i = 1, n = prices.size(); i < n; ++i)
    {
        const unsigned int current = prices[i];
        if (current < lowest)
        {
            lowest = current;
            continue;
        }
        const unsigned int current_profit = current - lowest;
        if (current_profit > max_profit)
            max_profit = current_profit;
        if (current < lowest)
            lowest = current;
    }
    return max_profit;
}
    
} // namespace S1
