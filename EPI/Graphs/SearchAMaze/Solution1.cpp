//
//  Solution1.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/22/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "Solution1.hpp"
#include "Vertex.hpp"

#include <array>

namespace S1
{
    
bool Valid(const Maze &maze, const Vertex &curr)
{
    return curr.x < maze.size() && curr.y < maze[curr.x].size() && maze[curr.x][curr.y] == Color::WHITE;
}

bool FindPathHelper(Maze &maze, const Vertex &curr, const Vertex &end, std::vector<Vertex> &path)
{
    if (!Valid(maze, curr))
        return false;
    maze[curr.x][curr.y] = Color::BLACK; // visited
    path.emplace_back(curr);
    if (curr == end)
        return true;
    std::array<std::array<int, 2>, 4> shifts = {{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}};
    for (std::array<int, 2> s : shifts)
    {
        if (FindPathHelper(maze, {curr.x + s[0], curr.y + s[1]}, end, path))
            return true;
    }
    path.pop_back();
    return false;
}

std::vector<Vertex> FindPath(Maze &maze, const Vertex &start, const Vertex &end)
{
    std::vector<Vertex> path;
    FindPathHelper(maze, start, end, path);
    return path;
}

} // namepsace S1
