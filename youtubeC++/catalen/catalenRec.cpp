#include<iostream>
#include<vector>
using namespace std;
struct Catalen{
    unsigned long long int index;
    unsigned long long int value;
};
vector<Catalen> memory;
unsigned long long int give(vector<Catalen> memory,unsigned long long int index){
    for(unsigned long long int i=0;i<memory.size();i++){
        if(memory[i].index==index){
            return memory[i].value;
        }
    }
}
bool search(vector<Catalen> memory,unsigned long long int index){
    for(unsigned long long int i=0;i<memory.size();i++){
        if(memory[i].index==index){
            return true;
        }
    }
    return false;
}
void add(vector<Catalen> &memory,unsigned long long int index,unsigned long long int value){
    Catalen mtemp;
    mtemp.index=index;
    mtemp.value=value;
    memory.push_back(mtemp);
}

unsigned long long int catalenFunc(unsigned long long int n){
    unsigned long long int result=0;
    unsigned long long int val_i=0;
    unsigned long long int val_n_i_1=0;
    bool flag_i,flag_n_i_1;
    if(n==0 || n==1){
        return 1;
    }
    for(unsigned long long int i=0;i<n;i++){
        flag_i=false;
        flag_n_i_1=false;
        if(search(memory,i)){
            flag_i=true;
            val_i=give(memory,i);
        }
        if(search(memory,n-i-1)){
            flag_n_i_1=true;
            val_n_i_1=give(memory,n-i-1);
        }
        if(flag_i && flag_n_i_1){
            result+=val_i*val_n_i_1;
            continue;
        }
        if(flag_i==true and flag_n_i_1==false){
			val_n_i_1=catalenFunc(n-i-1);
			result+=val_i*val_n_i_1;
			add(memory,n-i-1,val_n_i_1);
			continue;
		}
        if(flag_i==false and flag_n_i_1==true){
			val_i=catalenFunc(i);
			result+=val_i*val_n_i_1;
			add(memory,i,val_i);
			continue;
		}
        if(flag_i==false and flag_n_i_1==false){
			val_i=catalenFunc(i);
			val_n_i_1=catalenFunc(n-i-1);
			result+=val_i*val_n_i_1;
			add(memory,i,val_i);
            add(memory,n-i-1,val_n_i_1);
			continue;
		}
    }
    return result;
}

int main(){
    unsigned long long int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(unsigned long long int i=0;i<=num;i++){
        cout<<catalenFunc(i)<<"\t";
    }
    
    return 0;
}