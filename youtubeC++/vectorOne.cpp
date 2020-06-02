#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::vector;
using std::endl;
void print_vectorVal(vector<int> data){
    data.push_back(12);
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<"\t";
    }
    cout<<endl;
}

void print_vectorRef(vector<int> &data){
    data.push_back(12);
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<"\t";
    }
    cout<<endl;
}


int main(){
    vector<int> dataOne={1,2,3};
    vector<int> dataTwo={4,5,6};
    int count=0;
    while(count<4){
        cout<<"Function One"<<endl;
        print_vectorVal(dataOne);
        cout<<"Function Two"<<endl;
        print_vectorRef(dataTwo);
        count++;
    }
    return 0;
}