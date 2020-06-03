#include<iostream>
using namespace std;
int multiply(int x,int result[],int size){
    int carry=0;
    int multOP=0;
    for(int i=0;i<size;i++){
        multOP=result[i]*x + carry;
        result[i]=multOP%10;
        carry=multOP/10;
    }
    while(carry){
        result[size++]=carry%10;
        carry/=10;
    }
    return size;
}

int main(){
    int result[100000]={0};//initializing all elements by zero
    int size=1;
    result[0]=1;
    int n;
    cout<<"Enter the number to do factorial "<<endl;
    cin>>n;
    int x=2;
    while(x<=n){
        size=multiply(x,result,size);
        x++;
    }
    for(int i=size-1;i>=0;i--){
        cout<<result[i];
    }
    cout<<endl;
    return 0;
}