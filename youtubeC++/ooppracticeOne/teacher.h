#ifndef TEACHER_H
#define TEACHER_H
#include "user.h"
class Teacher:public User{
    public:
        std::vector<std::string> teaches;
        Teacher();
        void output();
};
#endif