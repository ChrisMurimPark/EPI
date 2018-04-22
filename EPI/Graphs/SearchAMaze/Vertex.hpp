//
//  Vertex.hpp
//  EPI
//
//  Created by Chris (Murim) Park on 4/22/18.
//  Copyright © 2018 Chris (Murim) Park. All rights reserved.
//

#ifndef Vertex_hpp
#define Vertex_hpp

struct Vertex
{
    size_t x, y;
    bool operator== (const Vertex &other) const
    {
        return this->x == other.x && this->y == other.y;
    }
};

#endif /* Vertex_hpp */
