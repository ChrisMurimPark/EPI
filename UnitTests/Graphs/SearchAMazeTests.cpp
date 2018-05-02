//
//  SearchAMazeTests.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/22/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include <gtest/gtest.h>
#include "../../EPI/Graphs/SearchAMaze/Solution1.hpp"
#include "Vertex.hpp"

class SearchAMazeTests : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
        maze =
        {
            { Color::BLACK, Color::WHITE, Color::BLACK },
            { Color::WHITE, Color::WHITE, Color::BLACK },
            { Color::WHITE, Color::BLACK, Color::WHITE }
        };
    }
    Maze maze;
};

TEST_F(SearchAMazeTests, GivenStartEqualsEnd_ReturnsCorrectPath)
{
    const Vertex start = {0, 1}, end = {0, 1};
    const std::vector<Vertex> &path = S1::FindPath(maze, start, end);
    ASSERT_EQ(1, path.size());
    EXPECT_EQ(start, path[0]);
}

TEST_F(SearchAMazeTests, GivenNoPath_ReturnsEmptyPath)
{
    const Vertex start = {0, 1}, end = {2, 2};
    EXPECT_EQ(0, S1::FindPath(maze, start, end).size());
}

TEST_F(SearchAMazeTests, GivenPossiblePath_ReturnsValidPath)
{
    const Vertex start = {0, 1}, end = {2, 0};
    const std::vector<Vertex> &path = S1::FindPath(maze, start, end);
    ASSERT_EQ(4, path.size());
    EXPECT_EQ(start, path[0]);
    EXPECT_EQ(Vertex({1, 1}), path[1]);
    EXPECT_EQ(Vertex({1, 0}), path[2]);
    EXPECT_EQ(end, path[3]);
}
