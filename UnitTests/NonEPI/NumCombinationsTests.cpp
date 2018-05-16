//
//  NumCombinationsTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 5/15/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/NonEPI/Combinations/NumCombinations.hpp"

TEST(NumCombinationsTests, NumCombinations_GivenKGreaterThanN_ReturnsZero)
{
    EXPECT_EQ(0, NumCombinations(5, 6));
}

TEST(NumCombinationsTests, NumCombinations_GivenValidInputs_ReturnsCorrectResult)
{
    EXPECT_EQ(20, NumCombinations(6, 3));
    EXPECT_EQ(210, NumCombinations(10, 4));
    EXPECT_EQ(2118760, NumCombinations(50, 5));
}
