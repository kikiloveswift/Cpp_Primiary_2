//
//  ExceptionHandler.cpp
//  Cpp_Primiary_2
//
//  Created by kong on 17/4/21.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "ExceptionHandler.hpp"
#include <string>
#include <exception>

void testException()
{
    printf("******EXCeption Class******\n");
    
    std::string str = "love yang huahua";
    
    try {
        char ch1 = str[100];
        printf("%c\n",ch1);
    } catch (std::exception e) {
        printf("out of bound\n");
    }
    
}
