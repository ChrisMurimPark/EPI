//
//  DFS.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/29/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "DFS.hpp"
#include <algorithm>
#include <stack>

bool DFSRecursiveHelper(const std::unordered_map<int, std::set<int>> &graph, std::set<int> &visited, std::vector<int> &path, const int current, const int end)
{
    if (current == end)
        return true;
    if (visited.find(current) != visited.end())
        return false;
    if (graph.find(current) == graph.end())
        return false;
    visited.emplace(current);
    for (int neighbor : graph.find(current)->second)
    {
        if (DFSRecursiveHelper(graph, visited, path, neighbor, end))
        {
            path.emplace_back(neighbor);
            return true;
        }
    }
    return false;
}

std::vector<int> DFSRecursive(const std::unordered_map<int, std::set<int>> &graph, const int start, const int end)
{
    std::vector<int> path;
    std::set<int> visited;
    if (DFSRecursiveHelper(graph, visited, path, start, end))
    {
        path.emplace_back(start);
        std::reverse(path.begin(), path.end());
    }
    return path;
}

std::vector<int> DFSIterative(const std::unordered_map<int, std::set<int>> &graph, const int start, const int end)
{
    return std::vector<int>(); // TODO
}
