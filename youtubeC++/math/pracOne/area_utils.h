#ifndef AREA_UTILS
#define PI 3.14
#define AREA_UTILS
struct Rectangle{
    double length;
    double width;
};
struct Circle{
    double radious;
};
double area(double length,double width);
double area(Rectangle rectangle);
double area(Circle circle);
double area(double length);
double power(double base,int exponent=0);
#endif