#include "area_utils.h"
#include <iostream>
using namespace std;
double area(double length,double width){
    return length*width;
}
double area(double length){
    return length*length;
}
double area(Rectangle rectangle){
    return rectangle.length*rectangle.width;
}
double area(Circle circle){
    return PI*circle.radious*circle.radious;
}
double power(double base,int exponent){
    // cout<<base<<exponent<<endl;
    double term =1;
    for(int i=0;i<exponent;i++){
        term*=base;
    }
    return term;
}