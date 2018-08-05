//
//  16_2_Tests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/DynamicProgramming/16.2/Solution1.hpp"

TEST(LevenshteinDistanceTests, GivenValidInputs_ReturnsCorrectDistance)
{
    EXPECT_EQ(4, S1::LevenshteinDistance("Saturdays", "Sunday"));
    EXPECT_EQ(8, S1::LevenshteinDistance("Carthorse", "Orchestra"));
}
