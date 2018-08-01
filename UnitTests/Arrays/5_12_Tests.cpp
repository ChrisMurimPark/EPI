//
//  5_12_Tests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 8/1/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Arrays/5.12/Solution1.hpp"
#include "../Common/ExpectManyEquals.hpp"

void PrintVector(const std::vector<int> &v)
{
    std::cout << "[";
    for (const int &i : v)
        std::cout << i << " ";
    std::cout << "]" << std::endl;
}

TEST(SampleOfflineDataTests, ZeroSample_ReturnsSameData)
{
    std::vector<int> v {1, 2, 3, 4, 5};
    std::vector<int> v_rand = v;
    S1::SampleOfflineData(v_rand, 0);
    EXPECT_MANY_EQUALS(v, v_rand);
}

TEST(SampleOfflineDataTests, DISABLED_SampleGreaterThanSize_ReturnsRandomData)
{
    std::vector<int> v {1, 2, 3, 4, 5};
    std::vector<int> v_rand = v;
    S1::SampleOfflineData(v_rand, (int) v_rand.size() + 1);
    PrintVector(v_rand);
}

TEST(SampleOfflineDataTests, DISABLED_SampleLessThanSize_ReturnsRandomData)
{
    std::vector<int> v {1, 2, 3, 4, 5};
    std::vector<int> v_rand = v;
    S1::SampleOfflineData(v_rand, 3);
    PrintVector(v_rand);
}
