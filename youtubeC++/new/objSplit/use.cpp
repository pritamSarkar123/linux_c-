#include "use.h"
//remove static
int User::get_user_count()
{
    return user_count;
}
std::string User::get_status()
{
    return status;
}
void User::set_status(std::string status)
{
    this->status = status;
}
User::User()
{
    std::cout << "User created" << std::endl;
    user_count++;
}
User::User(std::string frame, std::string lname, std::string status)
{
    this->fname = fname;
    this->lname = lname;
    this->set_status(status);
    user_count++;
}
User::~User()
{
    user_count--;
}
void User::output()
{
    std::cout << "I am user" << std::endl;
}
std::ostream &operator<<(std::ostream &output, User user);
std::istream &operator>>(std::istream &input, User &user);
void get_status_friendly(User user);

std::ostream &operator<<(std::ostream &output, User user)
{
    output << "name= " << user.fname << " " << user.lname << " status= " << user.status;
    return output;
}
std::istream &operator>>(std::istream &input, User &user)
{
    input >> user.fname >> user.lname >> user.status;
    return input;
}
void get_status_friendly(User user)
{
    std::cout << user.status << std::endl;
}
int User::user_count = 0;