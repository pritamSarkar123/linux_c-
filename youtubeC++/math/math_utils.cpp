#include "math_utils.h"
double area(double length,double width){
    return length*width;
}
double area(double length){
    return length*length;
}
double area(Rectangle rectangle){
    return rectangle.length*rectangle.width;
}
double pow(double base,int power){
    int total=1;
    for(int i=0;i<power;i++){
        total*=base;
    }
    return total; 
}