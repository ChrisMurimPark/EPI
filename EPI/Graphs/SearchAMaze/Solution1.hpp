//
//  Solution1.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/22/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef Solution1_hpp
#define Solution1_hpp

#include <vector>
#include "Maze.hpp"

struct Vertex;

namespace S1
{
    
std::vector<Vertex> FindPath(Maze &maze, const Vertex &start, const Vertex &end);

} // namespace S1

#endif /* Solution1_hpp */
