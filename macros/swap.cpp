#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#define swap(a,b,c) c t;t=a;a=b;b=t
int main(){
    int x=10;
    int y=20;
    cout<<"before x : "<<x<<" y : "<<y<<endl;
    swap(x,y,int);
    cout<<"after x : "<<x<<" y : "<<y<<endl;
    return 0;
}