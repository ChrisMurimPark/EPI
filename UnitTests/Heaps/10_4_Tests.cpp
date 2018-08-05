//
//  10_4_Tests.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Heaps/10.4/Solution1.hpp"

TEST(ClosestKStars, GivenValidInputs_ReturnsClosestStars)
{
    // star ids in order of closeness to earth -> [3, 2, 0, 1, 4];
    std::vector<Star> v {{0, 100, 100, 100}, {1, 100, 200, 100}, {2, 50, 25, 100}, {3, 10, 100, 10}, {4, 500, 500, 100}};
    std::vector<Star> closest_stars = S1::GetKClosestStars(v, 3);
    
    ASSERT_EQ(3, closest_stars.size());
    EXPECT_EQ(3, closest_stars[0].id);
    EXPECT_EQ(2, closest_stars[1].id);
    EXPECT_EQ(0, closest_stars[2].id);
}
