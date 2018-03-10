//
//  HasPalindromicPermutationTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 3/10/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/HashTables/HasPalindromicPermutation/Solution1.hpp"

TEST(HasPalindromicPermutationTests, GivenProperInputs_ReturnsCorrectResult)
{
    const std::string example_1("edified");
    const std::string example_2("aerrcac");
    const std::string example_3("jklfdas");
    
    EXPECT_TRUE(S1::HasPalindromicPermutation(example_1));
    EXPECT_TRUE(S1::HasPalindromicPermutation(example_2));
    EXPECT_FALSE(S1::HasPalindromicPermutation(example_3));
}

TEST(HasPalindromicPermutationTests, GivenEmptyString_ReturnsFalse)
{
    EXPECT_FALSE(S1::HasPalindromicPermutation(""));
}
