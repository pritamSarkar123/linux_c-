#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#define FUNCTION_ONE(a,b,c) a b##c

FUNCTION_ONE(int,ma,in)(){
    cout<<"Its main Man"<<endl;
    return 0;
}