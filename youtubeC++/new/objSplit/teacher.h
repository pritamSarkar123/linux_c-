#ifndef TEACHER_H
#define TEACHER_H
#include<iostream>
#include<string>
#include<vector>
#include "use.h"
class Teacher:public User{
    public:
        std::vector<std::string> classes_teaches;
        void output();
        Teacher();
};
#endif