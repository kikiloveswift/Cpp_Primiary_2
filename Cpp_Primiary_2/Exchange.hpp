//
//  Exchange.hpp
//  Cpp_Primiary_2
//
//  Created by kong on 17/4/19.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef Exchange_hpp
#define Exchange_hpp

#include <stdio.h>

template <typename T>
void Swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}

template<typename M>
M max(M a, M b, M c)
{
    M max_num = a;
    max_num = b > max_num ? b : max_num;
    max_num = c > max_num ? c : max_num;
    return max_num;
    
}


#endif /* Exchange_hpp */
