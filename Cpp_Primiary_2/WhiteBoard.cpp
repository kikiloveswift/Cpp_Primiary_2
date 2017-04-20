//
//  WhiteBoard.cpp
//  Cpp_Primiary_2
//
//  Created by kong on 17/4/20.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "WhiteBoard.hpp"

template <typename T1, typename T2>
void Point<T1, T2>::setX(T1 x)
{
    m_x = x;
}

template <typename T1, typename T2>
T1 Point<T1, T2>::getX()
{
    return m_x;
}

template <typename T1, typename T2>
void Point<T1, T2>::setY(T2 y)
{
    m_y = y;
}

template <typename T1, typename T2>
T2 Point<T1, T2>::getY()
{
    return m_y;
}
