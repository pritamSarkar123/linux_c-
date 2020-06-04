#include<iostream>
#include "math_utils.h"
using std::cin;
using std::cout;
using std::endl;
int main(){
    Rectangle rectangle;
    rectangle.length=10.0;
    rectangle.width=20.0;
    cout<<utilz::area(rectangle.length,rectangle.width)<<endl;
    cout<<utilz::area(rectangle.length)<<endl;
    cout<<utilz::area(rectangle)<<endl;
    cout<<utilz::pow(3,3)<<endl;
    cout<<utilz::pow(3)<<endl;
    return 0;
}  