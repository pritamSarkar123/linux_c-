#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void bubbleSort(int A[],int len){
    int temp;
    bool changed;
    for(int i=0;i<len-1;i++){
        changed=false;
        for(int j=i+1;j<len;j++){
            if(A[j]<A[i]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                changed=true;
            }
        }
        if(!changed) break;
    }
}
int main(){
    int len;
    cout<<"Enter your array length"<<endl;
    cin>>len;
    int array[len];
    cout<<"Enter "<<len<<" elements now!"<<endl;
    for(int i=0;i<len;i++){
        cin>>array[i];
    }
    cout<<"Before Bubbling\n";
    for(int i=0;i<len;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    bubbleSort(array,len);
    cout<<"After Bubbling\n";
    for(int i=0;i<len;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    return 0;
}