#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//int guesses[20];
int main(){
    int guesses[20];
    guesses[10]=5;
    for(int i=0;i<sizeof(guesses)/sizeof(int);i++){
        cout<<guesses[i]<<"\t";
    }
    cout<<"\n";
    int secongGuesses[20]={10,120,20,30,40,50};
    for(int i=0;i<sizeof(secongGuesses)/sizeof(int);i++){
        cout<<guesses[i]<<"\t";
    }
    return 0;
}