#include<iostream>
#include<string>
using namespace std;
struct User{
    string first_name;
    string last_name;
    string get_status(){
        return status;
    }
    private:
        string status="gold";
};
int main(){
    User me;
    me.first_name="pritam";
    me.last_name="sarkar";
    cout<<me.first_name<<" "<<me.last_name<<" "<<me.get_status()<<endl;
    return 0;
}