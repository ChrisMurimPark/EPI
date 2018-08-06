//
//  16_3_Tests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/DynamicProgramming/16.3/Solution1.hpp"

TEST(WaysToTraverse2DArrayTests, GivenValidInputs_ReturnsCorrectNumPaths)
{
    EXPECT_EQ(6, S1::WaysToTraverse2DArray(3));
    EXPECT_EQ(20, S1::WaysToTraverse2DArray(4));
    EXPECT_EQ(70, S1::WaysToTraverse2DArray(5));
}
