#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    //ternary for assigning values
    int val1=10;
    int val2=10;
    int point = val1==val2 ? 10 : 0;
    cout<<point<<endl;
    //ternary for execute statements (can be return statements also)
    point==10?cout<<"Success"<<endl:cout<<"Failure"<<endl;
    return 0;
}