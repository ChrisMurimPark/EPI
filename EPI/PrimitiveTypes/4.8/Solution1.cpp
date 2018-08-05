//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"

namespace S1
{
    
int ComputeReverse(int i)
{
    int result = 0;
    while (i)
    {
        result *= 10;
        result += (i % 10);
        i /= 10;
    }
    return result;
}
    
} // namespace S1
