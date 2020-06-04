#include<iostream>
#include<string>
using namespace std;
class ClassA{
    int id_a;
    public:
        explicit ClassA(int id_a){
            this->id_a=id_a;
        }
        void showIdA(){
            cout<<id_a<<endl;
        }
};
class ClassC{
    int id_c;
    public:
        explicit ClassC(int id_c){
            this->id_c=id_c;
        }
        void showIdC(){
            cout<<id_c<<endl;
        }
};
class ClassB:public ClassA,public ClassC{
    int id_b;
    public:
        ClassB(int id_b,int id_a,int id_c):ClassA(id_a),ClassC(id_c){
            this->id_b=id_b;
        }
        void showIdB(){
            cout<<id_b<<endl;
        }
};
int main(){
    ClassB objb(5,10,20);
    objb.showIdA();
    objb.showIdB();
    objb.showIdC();
    return 0;
}