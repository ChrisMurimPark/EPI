//
//  ExpectManyEquals.hpp
//  UnitTests
//
//  Created by Chris (Murim) Park on 8/1/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef ExpectManyEquals_hpp
#define ExpectManyEquals_hpp

#include <vector>
#include <gtest/gtest.h>

template <typename T>
void EXPECT_MANY_EQUALS(const std::vector<T> &lhs, const std::vector<T> &rhs)
{
    ASSERT_EQ(lhs.size(), rhs.size());
    for (int i = 0, n = (int) lhs.size(); i < n; ++i)
    {
        EXPECT_EQ(lhs[i], rhs[i]);
    }
}

#endif /* ExpectManyEquals_hpp */
