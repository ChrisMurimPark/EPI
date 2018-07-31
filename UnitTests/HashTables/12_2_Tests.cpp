//
//  IsAnonymousLetterConstructibleTests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 3/11/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/HashTables/12.2/Solution1.hpp"


class IsAnonymousLetterConstructibleTests : public ::testing::Test {
protected:
    
    virtual void SetUp()
    {
        magazine = "The New Yorker: So great, you'll forget you're still reading magazines in 2018.";
    }
    
    std::string magazine;
};

TEST_F(IsAnonymousLetterConstructibleTests, GivenProperInputs_ReturnsCorrectResult)
{
    EXPECT_TRUE(S1::IsAnonymousLetterConstructible("You're great.", magazine));
    EXPECT_FALSE(S1::IsAnonymousLetterConstructible("You're the epitomy of bad.", magazine));
}

TEST_F(IsAnonymousLetterConstructibleTests, GivenEmptyLetter_ReturnsTrue)
{
    const std::string magazine("The New Yorker: So great, you'll forget you're still reading magazines in 2018.");
    EXPECT_TRUE(S1::IsAnonymousLetterConstructible("", magazine));
    EXPECT_TRUE(S1::IsAnonymousLetterConstructible("", ""));
}

TEST_F(IsAnonymousLetterConstructibleTests, GivenEmptyMagazine_ReturnsFalse)
{
    EXPECT_FALSE(S1::IsAnonymousLetterConstructible("blah", ""));
}
