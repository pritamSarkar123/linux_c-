#include<iostream>
using namespace std;
void insertionSort(int arr[],int len){
    int val;
    int hole;
    for(int i=1;i<len;i++){
        hole=i;
        val=arr[hole];
        while(hole>0 && arr[hole-1]>val){
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=val;
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
    insertionSort(array,len);
    cout<<"After Merging\n";
    for(int i=0;i<len;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    return 0;
}