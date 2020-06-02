#include<iostream>
#include "math_utils.h"
using std::cin;
using std::cout;
using std::endl;
int main(){
    Rectangle rectangle;
    rectangle.length=10.0;
    rectangle.width=20.0;
    cout<<area(rectangle.length,rectangle.width)<<endl;
    cout<<area(rectangle.length)<<endl;
    cout<<area(rectangle)<<endl;
    cout<<pow(3,3)<<endl;
    cout<<pow(3)<<endl;
    return 0;
}  