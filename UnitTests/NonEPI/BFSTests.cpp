//
//  BFSTests.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 5/1/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "gtest/gtest.h"
#include "../../EPI/NonEPI/BFS/BFS.hpp"

TEST(BFSTests, BFS_GivenEmptyGraph_ReturnsEmptyPath)
{
    std::unordered_map<int, std::set<int>> graph;
    const std::vector<int> &path = BFS(graph, 0, 1);
    EXPECT_EQ(0, path.size());
}

TEST(BFSTests, BFS_GivenValidGraph_ReturnsCorrectPath)
{
    std::unordered_map<int, std::set<int>> graph;
    graph.emplace(std::pair<int, std::set<int>>(1, {2, 3, 6}));
    graph.emplace(std::pair<int, std::set<int>>(2, {3}));
    graph.emplace(std::pair<int, std::set<int>>(3, {1, 4, 5}));
    graph.emplace(std::pair<int, std::set<int>>(4, {5}));
    graph.emplace(std::pair<int, std::set<int>>(5, {}));
    graph.emplace(std::pair<int, std::set<int>>(6, {}));
    const std::vector<int> &path = BFS(graph, 1, 5);
    ASSERT_EQ(3, path.size());
    EXPECT_EQ(path[0], 1);
    EXPECT_EQ(path[1], 3);
    EXPECT_EQ(path[2], 5);
}
