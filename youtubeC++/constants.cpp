#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#define X 10
int main(){
    const int z=456;
    enum { name=7,age=25 };
    cout<<X<<endl;
    cout<<"name : "<<name<<" age : "<<age<<endl;
    cout<<z<<endl;
    return 0;
}