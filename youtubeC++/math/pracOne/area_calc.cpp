#include<iostream>
#include "area_utils.h"
using namespace std;
int main(){
    Rectangle rectangle;
    rectangle.length=10;
    rectangle.width=20;
    Circle circle;
    circle.radious=30;
    cout<<"Atrea of len 10 width 20 = "<<area(rectangle.length,rectangle.width)<<endl;
    cout<<"Atrea of Rec len 10 width 20 = "<<area(rectangle)<<endl;
    cout<<"Atrea of len 10 width 10 = "<<area(rectangle.length)<<endl;
    cout<<"Atrea of circle of redi 30 = "<<area(circle)<<endl;
    cout<<"3^2 "<<power(3.0,2)<<endl;
    cout<<"3^0 "<<power(3.0)<<endl;
    return 0;
}