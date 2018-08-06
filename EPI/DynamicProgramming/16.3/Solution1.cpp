//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include <vector>

namespace S1
{
    
int WaysToTraverse2DArray(int n)
{
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 1));
    
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    
    return dp[n - 1][n - 1];
}
    
} // namespace S1

