#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//#define ONE 1
int main(){
    #ifdef ONE
        cout<<"Yes defined"<<endl;
    #else
        cout<<"No not defined"<<endl;
    #endif
    #ifndef ONE
        cout<<"No not defined"<<endl;
    #else
        cout<<"Yes defined"<<endl;
    #endif
    
    return 0;
}