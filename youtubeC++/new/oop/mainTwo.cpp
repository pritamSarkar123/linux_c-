#include<iostream>
#include<string>
#include<vector>
using namespace std;
class User{
    static int user_count;
    string status="G";
    public:
        string first_name;
        string last_name;
        static int public_count;
        static int get_user_count(){
            return user_count;
        }
        string get_status(){
            return status;
        }
        void set_status(string status){
            if(status=="gold" || status=="silver" || status=="platinum"){
                this->status=status;
            }
            else{
                this->status="None";
            }
        }
        User(){
            ++user_count;
            ++public_count;
        }
        User(string first_name,string last_name,string status){
            this->first_name=first_name;
            this->last_name=last_name;
            this->set_status(status);
            ++user_count;
            ++public_count;
        }
        ~User(){
            //cout<<"Obj destroyed"<<endl;
            --user_count;
            --public_count;
        }
};
int User::user_count=0;
int User::public_count=0;
int add_user_unique(vector<User> &users,User user){
    for(int i=0;i<users.size();i++){
        if(users[i].first_name==user.first_name && users[i].last_name==user.last_name){
            return i;
        }
    }
    users.push_back(user);
    return users.size()-1;
}
int main(){
    // vector<User> users;
    // User user1("pritam","sarkar","silver"),user2("eshani","jas","platinum"),user3("rishika","kundu","gold");
    // users.push_back(user1);
    // users.push_back(user2);
    // users.push_back(user3);
    // User user4("eshani","jas","platinum");
    // cout<<add_user_unique(users,user4)<<endl;
    // cout<<User::get_user_count()<<endl;
    // users[users.size()-1].~User();
    // cout<<User::get_user_count()<<endl;
    User user,user1,user2,user3;
    //cout<<User::get_user_count()<<endl;
    cout<<User::public_count<<endl;
    user3.~User();
    //cout<<User::get_user_count()<<endl;
    cout<<User::public_count<<endl;
    return 0;
}