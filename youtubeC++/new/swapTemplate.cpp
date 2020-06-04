#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
template <typename T>
void swap(T &a,T &b){
    // a=a^b;
    // b=a^b;
    // a=a^b;
    T temp;
    temp=a;
    a=b;
    b=temp;
}
template <typename T>
void swap(T a[],T b[],int size){
    T temp;
    for(int i=0;i<size;i++){
        temp=a[i];a[i]=b[i];b[i]=temp;
    }
}
// void swap(string &a,string &b){
//     string temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
int main(){
    int a,b;
    cout<<"Enter a"<<endl; 
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<<"Before swap a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"After swap a = "<<a<<" b = "<<b<<endl;
    string c,d;
    cout<<"Enter First name"<<endl;
    cin>>c;
    cout<<"Enter Last name"<<endl;
    cin>>d;
    cout<<"Before swap FirstName = "<<c<<" LastName = "<<d<<endl;
    swap(c,d);
    cout<<"After swap FirstName = "<<c<<" LastName = "<<d<<endl;
    int SIZE = 6;
    int nines[SIZE]={9,9,9,9,9,9};
    int ones[SIZE]={1,1,1,1,1,1};
    int lll[SIZE];
    cout<<"Before swapping"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<nines[i]<<" "<<ones[i]<<"\t";
    }
    cout<<endl;
    swap(nines,ones,SIZE);
    cout<<"After swapping"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<nines[i]<<" "<<ones[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<lll[i]<<"\t";
    }
    cout<<endl;
    return 0;
}