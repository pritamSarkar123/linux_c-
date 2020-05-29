#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#define ONE 1
int main(){
    #ifdef ONE || TWO
        cout<<"Success"<<endl;
    #else
        cout<<"Failure"<<endl;
    #endif
    return 0;
}