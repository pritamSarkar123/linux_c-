#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::vector;
void write_to_file(vector<string> names){
    int term=0;
    ofstream fileW ("writeFile.txt");
    if(fileW.is_open()){
        for(string name:names){
            fileW<<name<<endl;
        }
        fileW.close();
    }
    else{
        cout<<"Unable to write"<<endl;
    }
}
void append_to_file(vector<string> names){
    int term=0;
    ofstream fileA ("appendFile.txt",std::ios::app);
    if(fileA.is_open()){
        for(string name:names){
            fileA<<name<<endl;
        }
        fileA.close();
    }
    else{
        cout<<"Unable to Append"<<endl;
    }
}
void read_form_appended(){
    vector<string> names;
    string name;
    ifstream fileR("appendFile.txt");
    if(fileR.is_open()){
        while(getline(fileR,name)){
            names.push_back(name);
        }
        for(string name:names){
            cout<<name<<"\t";
        }
        cout<<endl;
        fileR.close();
    }
    else{
        cout<<"Unable to Read!"<<endl;
    }
}
int main(){
    vector<string> names={"Pritam Sarkar","Rahul Banerjee","Eshani Jas","Rishika Kundu"};
    int term=0;
    while(term<5){
        write_to_file(names);
        term++;
    }
    term=0;
    while(term<5){
        append_to_file(names);
        term++;
    }
    read_form_appended();
    return 0;
}