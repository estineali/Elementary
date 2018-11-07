//
//  Node.hpp
//  Element War
//
//  Created by Ali Shujjat on 07/11/2018.
//  Copyright © 2018 Ali Shujjat. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#pragma once
#include <stdio.h>
#include"Atom.h"

struct Node
{
    Atom* unit;
    Node* next;
    Node* prev;
    
    ~Node()
    {
        delete unit;
    }
};

#endif /* Node_hpp */
