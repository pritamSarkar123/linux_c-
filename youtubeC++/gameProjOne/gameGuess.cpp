#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<limits>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::vector;

void print_array(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"\t";
    }
    cout<<"\n";
}

void play_game(){
    vector<int> guesses;
    int random = rand() % 251;
    cout<<"Guess a number in between 0 to 250!"<<endl;
    int guess;
    while(true){
        cin>>guess;
        guesses.push_back(guess);
        if(guess==random){
            cout<<"You win!"<<endl;
            break;
        }
        else if(guess<random){
            cout<<"Too low! Again guess"<<endl;
        }
        else{
            cout<<"Too high! Again guess"<<endl;
        }
    }
    print_array(guesses);
}
int main(){
    srand(time(NULL)); //making system clock time as seed
    cout<<"Hi there"<<endl;
    int choice;
    do{
        cout<<"0. Quit\n1. Play"<<endl;
        cin>>choice;
        switch(choice){
            case 0:
                cout<<"Thanks for nothing"<<endl;
                return 0;
                // break;
            case 1:
                play_game();
                break;
        }
    }while(true); //while(choice!=0);
}