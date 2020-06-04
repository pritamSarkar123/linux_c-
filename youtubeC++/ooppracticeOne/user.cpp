#include "user.h"


void User::set_userId(std::string userId){
    this->userId=userId;
}
std::string User::get_userId(){
    return userId;
}   
User::User(){
    std::cout<<"Blank User created"<<std::endl;
    user_count++;
}
User::User(std::string name,int age,std::string userId){
    std::cout<<"User created"<<std::endl;
    this->name=name;
    this->age=age;
    this->set_userId(userId);
    user_count++;
}
User::~User(){
    user_count--;
}
int User::get_user_count(){
    return user_count;
}
bool User::operator == (User user){
    if(user.userId==userId && user.age==age && user.name==name){
        return true;
    }
    else{
        return false;
    }
}
void User::output(){
    std::cout<<"This is User"<<std::endl;
}

int User::user_count=0;
std::istream &operator >> (std::istream &input,User &user){
    input>>user.name>>user.age>>user.userId;
    return input;
}
std::ostream &operator << (std::ostream &output,User user){
    output<<user.name<<" "<<user.age<<" "<<user.userId;
    return output;
}