#include<iostream>
#include<limits>
#include<string>
using std::string;
using std::numeric_limits;
using std::streamsize;
using std::cout;
using std::cin;
using std::endl;
void print_array(int array[],int count){
    for(int i=0;i<count;i++){
        cout<<array[i]<<"\t";
    }
    cout<<"\n";
}
int main(){
    int guesses[200];
    int guess_count=0;
    int i=0;
    do{
        cout<<"Input\n";
        if(cin>>guesses[i]){
            i++;
            guess_count++;
        }
        else{
            break;
        }
    }while(true);
    cin.clear();
    //<----------------One--------------------->
    // string test;
    // cin>>test;
    // cout<<test<<endl;
    //<-----------------Two-------------------->
    // cin.ignore(10000,'\n');
    // string test;
    // cin>>test;
    // cout<<test<<endl;
    //<----------------Three------------------->
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string test;
    cin>>test;
    cout<<test<<endl;
    print_array(guesses,guess_count);
    return 0;
}