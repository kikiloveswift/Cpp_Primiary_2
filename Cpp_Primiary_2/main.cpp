//
//  main.cpp
//  Cpp_Primiary_2
//
//  Created by kong on 16/11/25.
//  Copyright © 2016年 konglee. All rights reserved.
//

#include <iostream>
#include "Exchange.hpp"

class People
{
private:
    char *m_name;
    int m_age;
public:
    //普通的SET GET Method
    void setAge(int age);
    void setName(char *name);
    void say();
    int getAge();
    char* getName();
    
    People();
    //构造
    People(char *name,int age);
};

People::People()
{
    m_age = 0;
    m_name = NULL;
}

People::People(char *name,int age)
{
    m_name = name;
    m_age = age;
}

void People::setAge(int age)
{
    m_age = age;
}

int People::getAge()
{
    return m_age;
}

void People::setName(char *name)
{
    m_name = name;
}

char* People::getName()
{
    return m_name;
}


void People::say()
{
    std::cout << "name is "<< m_name << "age is " << m_age << std::endl;
}

class Student: public People
{
private:
    
    int score;
    
public:
    void sayScore();
};

void Student::sayScore()
{
    std::cout  << "score is " << score << std::endl;
}

int main(int argc, const char * argv[])
{
    People ppl((char *)"花花",12);
    ppl.say();
    std::cout << "ppl length is "<< sizeof(ppl) << std::endl;
    
    People *ppl2 = new People();
    ppl2 ->setName((char *)"白白");
    ppl2 ->setAge(22);
    std::cout << "ppl2 length is "<< sizeof(ppl2) << std::endl;
    
    char *a = (char *)"a";
    std::cout << sizeof(char) << std::endl;
    
    int n1 = 200, n2 = 100;
    Swap(&n1, &n2);
    std::cout << "n1 = " << n1 << "n2 = " << n2 << std::endl;
    
    int i1, i2, i3, max_num;
    
    std::cout << "输入3个数:" << std::endl;
    std::cin >> i1 >> i2 >> i3;
    max_num = max(i1, i2, i3);
    std::cout << "3个数:中最大值为"<< max_num << std::endl;
    return 0;
}



