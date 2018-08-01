//
//  Random.h
//  EPI
//
//  Created by Chris (Murim) Park on 8/1/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef Random_h
#define Random_h

#include <random>

template <typename T>
T rand_number()
{
    std::random_device rd;
    std::mt19937_64 mt;
    mt.seed(time(NULL));
    std::uniform_int_distribution<T> distribution;
    return distribution(mt);
}

#endif /* Random_h */
