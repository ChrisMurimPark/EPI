//
//  DFSTests.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/29/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "gtest/gtest.h"
#include "../../EPI/Graphs/General/DFS.hpp"

TEST(DFSTests, DFSRecursive_GivenEmptyGraph_ReturnsEmptyPath)
{
    std::unordered_map<int, std::set<int>> graph;
    const std::vector<int> &path = DFSRecursive(graph, 0, 1);
    EXPECT_EQ(0, path.size());
}

TEST(DFSTests, DFSRecursive_GivenValidGraph_ReturnsCorrectPath)
{
    std::unordered_map<int, std::set<int>> graph;
    graph.emplace(std::pair<int, std::set<int>>(1, {2, 3, 6}));
    graph.emplace(std::pair<int, std::set<int>>(2, {3}));
    graph.emplace(std::pair<int, std::set<int>>(3, {1, 4, 5}));
    graph.emplace(std::pair<int, std::set<int>>(4, {5}));
    graph.emplace(std::pair<int, std::set<int>>(5, {}));
    graph.emplace(std::pair<int, std::set<int>>(6, {}));
    const std::vector<int> &path = DFSRecursive(graph, 1, 5);
    ASSERT_EQ(5, path.size());
    EXPECT_EQ(path[0], 1);
    EXPECT_EQ(path[1], 2);
    EXPECT_EQ(path[2], 3);
    EXPECT_EQ(path[3], 4);
    EXPECT_EQ(path[4], 5);
}
