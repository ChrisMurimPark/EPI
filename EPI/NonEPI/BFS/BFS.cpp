//
//  BFS.cpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/29/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#include "BFS.hpp"

#include <queue>
#include <algorithm>

std::vector<int> BFS(const std::unordered_map<int, std::set<int>> &graph, const int start, const int end)
{
    std::unordered_map<int, int> parents;
    std::queue<int> Q;
    Q.push(start);
    
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        if (graph.find(u) == graph.end())
            return std::vector<int>();
        for (int v : graph.at(u))
        {
            if (parents.find(v) == parents.end())
            {
                Q.push(v);
                parents[v] = u;
            }
        }
    }
    
    std::vector<int> path;
    int current = end;
    do
    {
        path.push_back(current);
        current = parents[current];
    } while (path.back() != start);
    
    std::reverse(path.begin(), path.end());
    return path;
}
