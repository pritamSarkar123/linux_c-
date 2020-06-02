#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
void swap(string &a,string &b){
    string temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<<"Before swap a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"After swap a = "<<a<<" b = "<<b<<endl;
    string c,d;
    cout<<"Enter First name"<<endl;
    cin>>c;
    cout<<"Enter Last name"<<endl;
    cin>>d;
    cout<<"Before swap FirstName = "<<c<<" LastName = "<<d<<endl;
    swap(c,d);
    cout<<"After swap FirstName = "<<c<<" LastName = "<<d<<endl;
    return 0;
}