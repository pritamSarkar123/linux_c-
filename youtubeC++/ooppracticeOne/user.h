#ifndef USER_H
#define USER_H
#include<iostream>
#include<string>
#include<vector>
class User{
    std::string userId="user";
    static int user_count;
    public:
        std::string name;
        int age;
        void set_userId(std::string userId);
        std::string get_userId();
        User();
        User(std::string name,int age,std::string userId);
        ~User();
        virtual void output();
        static int get_user_count();
        bool operator == (User user);
        friend std::istream &operator >> (std::istream &input,User &user);
        friend std::ostream &operator << (std::ostream &output,User user);
};
#endif