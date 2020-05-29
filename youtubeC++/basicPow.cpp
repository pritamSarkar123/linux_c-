#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
double power(double,int);
void print_pow(double,int);
int main(){
    int base,exponent;
    cout<<"Enter the base"<<endl;
    cin>>base;
    cout<<"Enter the exponent"<<endl;
    cin>>exponent;
    print_pow(base,exponent);//power(base,exponent);//pow(base,exponent);
    return 0;
}
double power(double base,int exponent){
    double result=1;
    for(int i=0;i<exponent;i++){
        result=result*base;
    }
    return result;
}
void print_pow(double base,int exponent){
    double result=1;
    for(int i=0;i<exponent;i++){
        result=result*base;
    }
    cout<<"The output is "<<result<<endl;
}