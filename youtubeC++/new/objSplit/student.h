#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include "use.h"
class Student : public User
{
public:
    std::vector<std::string> reads;
    void output();
    Student();
};
#endif