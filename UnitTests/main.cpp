//
//  main.cpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 2/4/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <iostream>
#include <gtest/gtest.h>

#include "../EPI/Common/Random.h"

int main(int argc, const char * argv[]) {
    ::testing::InitGoogleTest(&argc, const_cast<char **>(argv));
    ::testing::FLAGS_gtest_filter = "Permutation*";
    return RUN_ALL_TESTS();
}
