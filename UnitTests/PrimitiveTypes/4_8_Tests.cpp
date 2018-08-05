//
//  4_8_Tests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/PrimitiveTypes/4.8/Solution1.hpp"

TEST(ComputeReverseTests, PositiveNumber_ReturnsReverse)
{
    int i = 12;
    EXPECT_EQ(21, S1::ComputeReverse(i));
}

TEST(ComputeReverseTests, NegativeNumber_ReturnsReverse)
{
    int i = -321;
    EXPECT_EQ(-123, S1::ComputeReverse(i));
}

TEST(ComputeReverseTests, Zero_ReturnsZero)
{
    int i = 0;
    EXPECT_EQ(0, S1::ComputeReverse(i));
}
