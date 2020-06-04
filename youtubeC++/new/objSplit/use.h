#ifndef USE_H
#define USE_H
#include <iostream>
#include <string>
class User
{
    std::string status = "gold";
    static int user_count;

public:
    std::string fname;
    std::string lname;
    static int get_user_count();
    std::string get_status();
    void set_status(std::string status);
    User();
    User(std::string frame, std::string lname, std::string status);
    ~User();
    void output();
    //virtual void output();
    friend std::ostream &operator<<(std::ostream &output, User user);
    friend std::istream &operator>>(std::istream &input, User &user);
    friend void get_status_friendly(User user);
};
#endif