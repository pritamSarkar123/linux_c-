#include "user.h"
#include "teacher.h"
#include "student.h"
#include "admin.h"

void doSomething(User &user){
    user.output();
}
int main(){
    Teacher t;
    Student s;
    Admin a;
    User &u1=t;
    User &u2=s;
    User &u3=a;
    doSomething(u1);
    doSomething(u2);
    doSomething(u3);
    return 0;
}