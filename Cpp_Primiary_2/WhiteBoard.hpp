//
//  WhiteBoard.hpp
//  Cpp_Primiary_2
//
//  Created by kong on 17/4/20.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef WhiteBoard_hpp
#define WhiteBoard_hpp

#include <stdio.h>

template <typename T1, typename T2>
class Point
{
    
public:
    Point(T1 x, T2 y): m_x(x), m_y(y){}
    
public:
    void setX(T1 x);
    T1 getX();
    
    void setY(T2 y);
    T2 getY();
    
public:
    T1 m_x;
    T2 m_y;
   
};

#endif
