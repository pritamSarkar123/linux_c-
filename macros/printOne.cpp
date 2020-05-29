#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#define PRINT(s1,s2) printf("%s=%s & %s=%s",#s1,s1,#s2,s2)
int main(){
    char *str1="Pritam";
    char *str2="Sarkar";
    PRINT(str1,str2);
    return 0;
}