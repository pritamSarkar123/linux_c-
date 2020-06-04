#include<iostream>
#include<string>
using namespace std;
class ClassA{
    public:
        string id_a;
        ClassA(){
            cout<<"ClassA created"<<endl;
        }
        void getIdA(){
            cout<<id_a<<endl;
        }
};
class ClassB:virtual public ClassA{
    public:
        string id_b;
        ClassB(){
            cout<<"ClassB created"<<endl;
        }
        void getIdB(){
            cout<<id_b<<endl;
        }
};
class ClassC:virtual public ClassA{
    public:
        string id_c;
        ClassC(){
            cout<<"ClassC created"<<endl;
        }
        void getIdC(){
            cout<<id_c<<endl;
        }
};
class ClassD:public ClassB,public ClassC{
    public:
        string id_d;
        ClassD(){
            cout<<"ClassD created"<<endl;
        }
        void getIdD(){
            cout<<id_d<<endl;
        }
        
};
int main(){
    ClassD objd;
    objd.id_a="20"; // id_a in B = id_a in C ="20";
    objd.id_a="25"; //ovwrwrites the 1st one, id_a in B = id_a in C ="25";
    objd.id_b="50";
    objd.id_c="30";
    objd.id_d="40";
    objd.getIdA();
    objd.getIdB();
    objd.getIdC();
    objd.getIdD();
    return 0;
}