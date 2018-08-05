//
//  15_3_Tests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Recursion/15.3/Solution1.hpp"
#include <iostream>

TEST(PermutationsTests, GivenValidInputs_ReturnsAllPermutations)
{
    std::vector<int> v {1, 2, 3, 4};
    std::vector<std::vector<int>> result = S1::Permutations(v);
    for (const std::vector<int> &r : result)
    {
        std::cout << "[";
        for (const int &i : r)
        {
            std::cout << " " << i;
        }
        std::cout << " ]" << std::endl;
    }
}
