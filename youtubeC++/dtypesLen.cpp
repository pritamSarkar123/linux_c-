#include<iostream>
#include<climits>
#include<float.h>
#include<cmath>
using std::cout;
using std::cin;
using std::boolalpha;
using std::endl;
using std::fixed;
void get_ints(){
    cout<<sizeof(short)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(unsigned short)<<endl;
    cout<<sizeof(unsigned int)<<endl;
    cout<<sizeof(unsigned long)<<endl;
    cout<<sizeof(unsigned long long)<<endl;
}
void get_int_limits(){
    cout<< SHRT_MAX <<endl;
    cout<< SHRT_MIN <<endl;
    cout<< USHRT_MAX <<endl;
    cout<< INT_MAX <<endl;
    cout<< INT_MIN <<endl;
    cout<< UINT_MAX <<endl;
    cout<< LONG_MAX <<endl;
    cout<< LONG_MIN <<endl;
    cout<< ULONG_MAX <<endl;
    cout<< LLONG_MAX <<endl;
    cout<< LLONG_MIN <<endl;
    cout<< LLONG_MAX <<endl;
    cout<< LLONG_MIN <<endl;
}
void sudo_ints(){
    cout<<sizeof(char)<<endl;
    cout<<sizeof(unsigned char)<<endl;
    char x=65;
    cout<< (int) x<<endl;
}
void bool_out(){
    bool x=true;
    cout<<x<<endl;
    cout<<boolalpha<<x<<endl;
}
void check_floats(){
    double x=10E7;
    cout<<x<<endl;
    cout<<fixed<<x<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long double)<<endl;
    cout<<FLT_DIG<<endl;
    cout<<DBL_DIG<<endl;
    cout<<LDBL_DIG<<endl;
}
int main(){
    get_ints();
    get_int_limits();
    sudo_ints();
    bool_out();
    check_floats();
    cout<<(int)nearbyint(-1.5)<<endl;
    return 0;
}