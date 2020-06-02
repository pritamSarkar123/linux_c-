#include<iostream>
#include<array> 
#include<ctime>
#include<cstdlib>
using std::array;
using std::cin;
using std::cout;
using std::endl;
void show_output(array<int,500> data,int count){
    for(int i=0;i<count;i++){
        cout<<data[i]<<"\t";
    }
    cout<<endl;
}
void play_game(){
    array<int,500> guesses;
    int random=rand() % 251;
    int guesscount=0;
    cout<<random<<endl;
    int guess;
    cout<<"Guess a number in between 0 and 250"<<endl;
    while(true){
        cin>>guess;
        guesses[guesscount++]=guess;
        if(guess==random){
            show_output(guesses,guesscount);
            break;
        }
        else if(guess<random){
            cout<<"too Low!\n";
        }
        else{
            cout<<"too High\n";
        }
    }
}
int main(){
    srand(time(NULL));
    int option;
    do{
        cout<<"0. Quit\n1. Play"<<endl;
        cin>>option;
        switch(option){
            case 0:
                cout<<"Thanks for nothing!\n";
                break;
            case 1:
                play_game();
                break;
        }
    }while(option!=0);
    return 0;
}