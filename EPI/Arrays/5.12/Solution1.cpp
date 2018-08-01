//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 8/1/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include "../../Common/Random.h"

namespace S1
{

void Swap(std::vector<int> &v, int i, int j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void SampleOfflineData(std::vector<int> &v, int k)
{
    int n = (int) v.size();
    if (k > n)
        k = n;
    for (int i = 0; i < k; ++i)
    {
        int rand_index = (rand_number<int>() % (n - i)) + i;
        Swap(v, i, rand_index);
    }
}

} // namespace S1

