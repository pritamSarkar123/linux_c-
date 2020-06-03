#include<iostream>
#include<vector>
using namespace std;
struct Fibonacchi
{
    long long int index;
    long long int value;
};
vector<Fibonacchi> fiblist;
long long int give(vector<Fibonacchi> fiblist,long long int index){
    for(int i=0;i<fiblist.size();i++){
        if(fiblist[i].index==index){
            return fiblist[i].value;
        }
    }
}
bool search(vector<Fibonacchi> fiblist,long long int index){
    for(int i=0;i<fiblist.size();i++){
        if(fiblist[i].index==index){
            return true;
        }
    }
    return false;
}
void add(vector<Fibonacchi> &fiblist,long long int index,long long int value){
    Fibonacchi ftemp;
    ftemp.index=index;
    ftemp.value=value;
    fiblist.push_back(ftemp);
}
long long int fibonacchi(long long int x){
    long long int val;
    if(search(fiblist,x)){
        return give(fiblist,x);
    }
    else{
        if(x==0 || x==1){
            val=x;
        }
        else{
            val=fibonacchi(x-1)+fibonacchi(x-2);
        }
        add(fiblist,x,val);
        return val;
    }
}
void fibonacchi_generator(long long int num){
    for(long long int i=0;i<num;i++){
        cout<<fibonacchi(i)<<"\t";
    }
    cout<<endl;
}
int main(){
    long long int num;
    // cout<<"Enter upto which range U want fibonacchi!"<<endl;
    // cin>>num;
    // fibonacchi_generator(num);
    // cout<<"Fibonacchi val at index "<<num<<"=>"<<fibonacchi(num)<<endl;
    cout<<"Enter the fib range "<<endl;
    cin>>num;
    for(long long int i=0;i<=num;i++){
        cout<<i<<" -------------------------------------"<<endl;
        fibonacchi_generator(i);
        cout<<endl;
    }
    return 0;
}