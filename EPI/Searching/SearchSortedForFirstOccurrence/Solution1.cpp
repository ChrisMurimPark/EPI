//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 3/4/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

namespace S1
{

int GetFirstOccurrence(const std::vector<int> &sorted_v, const int k)
{
    int L = 0, U = int(sorted_v.size()) - 1, to_return = -1;
    while (L < U)
    {
        int M = L + (U - L) / 2;
        const int &current = sorted_v[M];
        if (current < k)
            L = M + 1;
        else if (current > k)
            U = M - 1;
        else
        {
            U = M;
            to_return = M;
        }
    }
    return to_return;
}

}
