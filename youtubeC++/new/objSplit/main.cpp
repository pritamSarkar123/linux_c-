#include "use.h"
#include "teacher.h"
#include "student.h"
void doSomething(User &u)
{
    u.output();
}
int main()
{
    // User user;
    // std::cout << User::get_user_count() << std::endl;
    // std::cin >> user;
    // // user.fname="pritam";
    // // user.lname="sarkar";
    // // user.set_status("gold");
    // std::cout << user << std::endl;
    // Teacher teacher;
    // teacher.output();
    // teacher.fname = "eshani";
    // teacher.lname = "jas";
    // std::cout << teacher.fname << " " << teacher.lname << std::endl;
    Teacher t;
    Student s;
    User &u1 = t;
    User &u2 = s;
    doSomething(u1);
    doSomething(u2);
    return 0;
}