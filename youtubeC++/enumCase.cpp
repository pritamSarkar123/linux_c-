#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    // enum names{pritam,eshani,rahul,pujki};
    // cout<<pritam<<endl;
    // cout<<eshani<<endl;
    // cout<<rahul<<endl;
    // cout<<pujki<<endl;
    enum class Names{pritam,eshani,rahul,pujki};
    Names name=Names::pritam;
    switch(name){
        case Names::pritam:
            cout<<"Hello Pritam"<<endl;
            break;
        case Names::rahul:
            cout<<"Hello Rahul"<<endl;
            break;
        case Names::eshani:
            cout<<"Hello Eshani"<<endl;
            break;
        case Names::pujki:
            cout<<"Hello Pujki"<<endl;
            break;
    }
    return 0;
}