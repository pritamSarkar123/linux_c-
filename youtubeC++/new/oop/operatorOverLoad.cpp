#include<iostream>
using namespace std;
class Position{
    public:
        int x=10;
        int y=20;
        Position operator + (Position pos){
            Position new_pos;
            new_pos.x=x+pos.x;
            new_pos.y=y+pos.y;
            return new_pos;
        }
        bool operator == (Position pos){
            if(x==pos.x && y==pos.y){
                return true;
            }
            else{
                return false;
            }
        }
};
int main(){
    Position a,b,c,d;
    c=a+b;
    cout<<c.x<<" "<<c.y<<endl;
    if(a==b){
        cout<<"They are same"<<endl;
    }
    else{
        cout<<"They are different"<<endl;
    }
    return 0;
}