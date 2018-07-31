//
//  4_7_Tests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 7/31/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/PrimitiveTypes/4.7/Solution1.hpp"

const double tolerance = 1e-10;

TEST(ExponentTest, TestPowerOfZero)
{
    EXPECT_NEAR(1, S1::exp(5, 0), tolerance);
    EXPECT_NEAR(1, S1::exp(999, 0), tolerance);
}

TEST(ExponentTest, TestPowerOfOne)
{
    EXPECT_NEAR(42, S1::exp(42, 1), tolerance);
    EXPECT_NEAR(723, S1::exp(723, 1), tolerance);
}

TEST(ExponentTest, TestPositivePowers)
{
    EXPECT_NEAR(32, S1::exp(2, 5), tolerance);
    EXPECT_NEAR(2097152, S1::exp(8, 7), tolerance);
}

TEST(ExponentTest, TestNegativePowers)
{
    EXPECT_NEAR(0.125, S1::exp(2, -3), tolerance);
    EXPECT_NEAR(0.000003814697266, S1::exp(8, -6), tolerance);
}
