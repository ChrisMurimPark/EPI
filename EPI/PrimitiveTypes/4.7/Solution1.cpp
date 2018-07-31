//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 7/31/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

namespace S1
{
    
int abs(int x)
{
    return x < 0 ? -x : x;
}

double exp(double x, int y)
{
    if (y == 0)
        return 1;
    double res = x;
    int y_rem = abs(y) - 1;
    while (y_rem > 0)
    {
        int curr_exp = 1;
        double mult = x;
        while (y_rem >= curr_exp)
        {
            y_rem -= curr_exp;
            res *= mult;
            mult *= mult;
            curr_exp *= 2;
        }
    }
    res = y < 0 ? 1 / res : res;
    return res;
}

} // namespace S1
