#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void merger(int A[],int low,int mid,int heigh){
    int i=low;
    int j=mid+1;
    int m=mid;
    int n=heigh;
    int k=0;
    int SIZE=heigh-low+1;
    int C[SIZE];
    while(i<=m && j<=n){
        (A[i]<A[j])?C[k++]=A[i++]:C[k++]=A[j++];
    }
    while(i<=m){
        C[k++]=A[i++];
    }
    while(j<=n){
        C[k++]=A[j++];
    }
    k=0;
    for(int i=low;i<=heigh;i++){
        A[i]=C[k++];
    }
}

void mergeSort(int A[],int low,int heigh){
    int mid;
    if(low<heigh){
        mid=(low+heigh)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,heigh);
        merger(A,low,mid,heigh);
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
    cout<<"Before Merging\n";
    for(int i=0;i<len;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    mergeSort(array,0,len-1);
    cout<<"After Merging\n";
    for(int i=0;i<len;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    return 0;
}