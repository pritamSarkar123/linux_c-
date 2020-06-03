#include<iostream>
#include<vector>
using namespace std;
struct Catalen{
    unsigned long long int index;
    unsigned long long int value;
};
vector<Catalen> memory;
//problem :- factorial is not an good approach it may exceed the range
unsigned long long int factorial(unsigned long long int num){
    unsigned long long int temp=1;
    for(unsigned long long int i=2;i<=num;i++){
        temp*=i;
    }
    return temp;
}
unsigned long long int give(vector<Catalen> memory,unsigned long long int index){
    for(unsigned long long int i=0;i<memory.size();i++){
        if(memory[i].index==index){
            return memory[i].value;
        }
    }
}
bool search(vector<Catalen> memory,unsigned long long int index){
    for(unsigned long long int i=0;i<memory.size();i++){
        if(memory[i].index==index){
            return true;
        }
    }
    return false;
}
void add(vector<Catalen> &memory,unsigned long long int index,unsigned long long int value){
    Catalen mtemp;
    mtemp.index=index;
    mtemp.value=value;
    memory.push_back(mtemp);
}

unsigned long long int catalenFunc(unsigned long long int n){
    unsigned long long int result=0;
    unsigned long long int val=0;
    bool flag;
    if(n==0 || n==1){
        return 1;
    }
    else{
        if(search(memory,n)){
            flag=true;
            return give(memory,n);
        }
        else{
            val=factorial(2*n)/(factorial(2*n-n)*factorial(n+1));
            add(memory,n,val);
            return val;
        }
    }
}

int main(){
    unsigned long long int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(unsigned long long int i=0;i<=num;i++){
        cout<<catalenFunc(i)<<"\t";
    }
    
    return 0;
}