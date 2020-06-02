#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
struct Rectangle{
    double length;
    double width;
};
double area(double length,double width){
    return length*width;
}
double area(double length){
    return length*length;
}
double area(Rectangle rectangle){
    return rectangle.length*rectangle.width;
}
double pow(double base,int power=0){
    int total=1;
    for(int i=0;i<power;i++){
        total*=base;
    }
    return total; 
}
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