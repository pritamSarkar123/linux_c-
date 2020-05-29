#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#define CONCAT(a,b) a##b
int main(){
    int v1=10;
    int v2=20;
    int v12=30;
    cout<<CONCAT(v1,2)<<endl;
    return 0;
}