#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//#define X 3
//undefined macro initialized with 0
#if X==3
    #define Y 5
#else
    #define Y 10
#endif
int main(){
    cout<<Y<<endl;
    return 0;
}