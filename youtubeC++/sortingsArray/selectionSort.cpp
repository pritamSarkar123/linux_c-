#include<iostream>
using namespace std;
void selectionSort(int arr[],int len){
    int imin;
    for(int i=0;i<len-1;i++){
        imin=i;
        for(int j=i+1;j<len;j++){
            if(arr[imin]>arr[j]){
                imin=j;
            }
            arr[i]=arr[i]^arr[imin];
            arr[imin]=arr[i]^arr[imin];
            arr[i]=arr[i]^arr[imin];
        }
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
    selectionSort(array,len);
    cout<<"After Merging\n";
    for(int i=0;i<len;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    return 0;
}