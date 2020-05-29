#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//undefined macro initialized with 0
//#define P 5
#define ISEQUAL(x,y) x==y
int main(){
    #if ISEQUAL(P,0)
        cout<<"success\a"<<endl;
    #else
        cout<<"failure\a"<<endl;
    #endif
    return 0;
}
