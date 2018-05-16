//
//  DFS.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/29/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef DFS_hpp
#define DFS_hpp

#include <vector>
#include <unordered_map>
#include <set>

std::vector<int> DFSRecursive(const std::unordered_map<int, std::set<int>> &graph, const int start, const int end);

#endif /* DFS_hpp */
