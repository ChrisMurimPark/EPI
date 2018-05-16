//
//  BFS.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/29/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef BFS_hpp
#define BFS_hpp

#include <vector>
#include <unordered_map>
#include <set>

std::vector<int> BFS(const std::unordered_map<int, std::set<int>> &graph, const int start, const int end);

#endif /* BFS_hpp */
