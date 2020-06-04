#ifndef ADMIN_H
#define ADMIN_H
#include "user.h"
class Admin:public User{
    public:
        std::vector<std::string> depts;
        Admin();
        void output();
};
#endif