//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 8/5/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include <queue>
#include <algorithm>
#include <cmath>

namespace S1
{
    
struct StarWithDistance
{
    Star star;
    int distance_to_earth;
};
    
struct MinHeapComparator
{
    bool operator()(const StarWithDistance &lhs, const StarWithDistance &rhs) const
    {
        return lhs.distance_to_earth > rhs.distance_to_earth;
    }
};
    
typedef std::priority_queue<StarWithDistance, std::vector<StarWithDistance>, MinHeapComparator> MinHeap;
    
int CalculateDistanceToEarth(const Star &s)
{
    return std::pow(std::pow(s.x, 2) + std::pow(s.y, 2) + std::pow(s.z, 2), 0.5);
}
    
std::vector<Star> GetKClosestStars(const std::vector<Star> &stars, const int k)
{
    MinHeap ordered_stars;
    for (const Star &star : stars)
    {
        StarWithDistance s {star, CalculateDistanceToEarth(star)};
        ordered_stars.emplace(s);
    }
    
    std::vector<Star> result;
    for (int i = 0; i < k; ++i)
    {
        result.emplace_back(ordered_stars.top().star);
        ordered_stars.pop();
    }
    
    return result;
}
    
} // namespace S1
