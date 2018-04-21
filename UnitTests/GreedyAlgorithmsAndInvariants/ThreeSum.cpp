//
//  ThreeSum.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/21/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/GreedyAlgorithmsAndInvariants/ThreeSum.hpp"

TEST(ThreeSumTests, GivenEmptyVector_ReturnsFalse)
{
    std::vector<int> v = {};
    EXPECT_FALSE(S1::ThreeSumExists(v, 5));
}

TEST(ThreeSumTests, GivenValidInputs_ReturnsCorrectValues)
{
    std::vector<int> v = {-1, 3, 7, 8};
    EXPECT_TRUE(S1::ThreeSumExists(v, 13));
    EXPECT_FALSE(S1::ThreeSumExists(v, 12));
    EXPECT_TRUE(S1::ThreeSumExists(v, 21));
}

TEST(ThreeSumTests, GivenSingleNumber_ReturnsCorrectValue)
{
    std::vector<int> v = {-2};
    EXPECT_TRUE(S1::ThreeSumExists(v, -6));
}
