#include<iostream>
#include<string>
class User{
    std::string status="gold";
    static int user_count;
    public:
        std::string fname;
        std::string lname;
        static int get_user_count(){
            return user_count;
        }
        std::string get_status(){
            return status;
        }
        void set_status(std::string status){
            this->status=status;
        }
        User(){
            user_count++;
        }
        User(std::string frame,std::string lname,std::string status){
            this->fname=fname;
            this->lname=lname;
            this->set_status(status);
            user_count++;
        }
        ~User(){
            user_count--;
        }
        friend std::ostream& operator << (std::ostream& output,User user);
        friend std::istream& operator >> (std::istream& input,User &user);
        friend void get_status_friendly(User user);
};
std::ostream& operator << (std::ostream& output,User user){
    output<<"name= "<<user.fname<<" "<<user.lname<<" status= "<<user.status;
    return output;
}
std::istream& operator >> (std::istream& input,User &user){
    input>>user.fname>>user.lname>>user.status;
    return input;
}
void get_status_friendly(User user){
    std::cout<<user.status<<std::endl;
}
int User::user_count=0;
int main(){
    User user;
    std::cout<<User::get_user_count()<<std::endl;
    std::cin>>user;
    // user.fname="pritam";
    // user.lname="sarkar";
    // user.set_status("gold");
    std::cout<<user<<std::endl;
    return 0;
}