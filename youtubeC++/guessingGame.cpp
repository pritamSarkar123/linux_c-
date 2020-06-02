#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<fstream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
void save_score(int new_score){
    ifstream input ("best_score.txt");//reading from file
    if(!input.is_open()){
        cout<<"Unable to read\n";
        return; 
    }
    int best_score;
    input >> best_score;
    
    ofstream output ("best_score.txt");//writting to file
    if(!output.is_open()){
        cout<<"Unable to write\n";
        return; 
    }
    if(best_score>new_score){
        output << new_score;
    }
    else{
        output << best_score; //if we dont write this, a blank write occurs -_-
    }
}
void show_output(vector<int> data){
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<"\t";
    }
    cout<<endl;
    int new_score=data.size();
    save_score(new_score);
}
void play_game(){
    vector<int> guesses;
    int random=rand() % 251;
    cout<<random<<endl;
    int guess;
    cout<<"Guess a number in between 0 and 250"<<endl;
    while(true){
        cin>>guess;
        guesses.push_back(guess);
        if(guess==random){
            show_output(guesses);
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