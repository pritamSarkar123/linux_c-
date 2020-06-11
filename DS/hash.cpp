#include<iostream>
#include<string>
#include<vector>
#define TABLE_SIZE 1024
using namespace std;
class Node{
	public:
		string key;
		string value;
		Node* next;
		Node(string key=NULL,string value=NULL,Node* next=NULL){
			this->key = key;
			this->value = value;
			this->next = next;
		}
};
class Hash{
	private:
		bool deleted;
		Node* array[TABLE_SIZE];
	public:
		Hash(){
			for(int i=0; i<TABLE_SIZE;i++){
				this->array[i] = NULL;
			}
			this->deleted=false;		
		}
		~Hash(){
			for(int i=0; i<TABLE_SIZE;i++){
				this->array[i] = NULL;
			}
			this->deleted=true;
		}
		Node* createElement(string key, string value){
			Node* new_node=new Node(key,value,NULL);
			return new_node;
		}
		unsigned int hashOne(unsigned int key){
			return key%35;
		}
		unsigned int hashTwo(unsigned int key){
			return 7-(key%7);
		}
		unsigned int map(string key){
			unsigned int sum=0,position=0;
			for(int i=0;i<key.length();i++){
				sum+=int(key[i]);
			}
			unsigned int h1=this->hashOne(sum),h2=this->hashTwo(sum);
			position=h1*h1 + key.length()*37*h2;
			position=position%TABLE_SIZE;
			//cout<<sum<<" "<<h1<<" "<<h2<<" "<<position<<endl;
			return position;
		}
		void attachElement(Node* new_node,unsigned int slot){
			if(this->array[slot]==NULL){
				this->array[slot]=new_node;
			}
			else{
				Node* temp=this->array[slot];
				while(temp!=NULL){//if duplicate then replace
					if(temp->key==new_node->key){ 
						temp->value=new_node->value;
						return;
					}
					temp=temp->next;
				}
				temp=this->array[slot];//non duplicate
				while(temp->next!=NULL){
					temp=temp->next;
				}
				temp->next=new_node;
			}
		}
		void hashSet(string key,string value){
		//setting each values
			if(this->deleted){
				cout<<"Table do not exhist"<<endl;
				return;
			}
			Node*new_node=this->createElement(key,value);
			unsigned int slot=this->map(key);
			this->attachElement(new_node,slot);
			cout<<"Element Inserted at slot: "<<slot<<endl;
		}
		void hashGet(string key){
		//printing individual element
			if(this->deleted){
				cout<<"Table do not exhist"<<endl;
				return;
			}
			unsigned int slot=this->map(key);
			Node* temp=this->array[slot];
			while(temp!=NULL){
				if(temp->key==key){ 
					cout<<"slot : [ "<<slot<<" ] -> key : [ "<<key<<" ] ,val : [ "<<temp->value<<" ]"<<endl;
					return;
				}
				temp=temp->next;
			}
			cout<<"key "<<key<<" not present "<<endl;
		}
		void hashDelete(string key){
		//deleting each element in hash table
			if(this->deleted){
				cout<<"Table do not exhist"<<endl;
				return;
			}
			unsigned int slot=this->map(key);
			Node* temp=this->array[slot];
			while(temp!=NULL){
				if(temp->key==key){
					this->array[slot]=temp->next;
					temp=NULL;
					cout<<"Item of key : "<<key<<" Deleted!"<<endl;
					return;
				}
				else if(temp->next->key==key){
					Node* t=temp->next;
					temp->next=temp->next->next;
					cout<<"Item of key : "<<key<<" Deleted!"<<endl;
					return;
				}
				temp=temp->next;	
			}
			cout<<"key "<<key<<" not present "<<endl;
		}
		void dropTable(){
		//delete the entire table by calling the destructor
		//and locking a private variable "deleted" by making it true
			if(this->deleted){
				cout<<"Table do not exhist"<<endl;
				return;
			}
			this->deleted=true;	
			cout<<"Table completely deleted -_-"<<endl;
			this->~Hash();
		}
		void showTable(){
		//show the entire table in [key]:[value] format
			if(this->deleted){
				cout<<"Table do not exhist"<<endl;
				return;
			}
			for(int i=0;i<TABLE_SIZE;i++){
				Node* temp=this->array[i];
				if(temp==NULL) continue;
				while(temp!=NULL){
					cout<<"slot : [ "<<i<<" ] -> key : [ "<<temp->key<<" ] ,val : [ "<<temp->value<<" ]"<<endl;
					temp=temp->next;
				}
			}
		}
		void getKeys(){
		//gets all keys
			if(this->deleted){
				cout<<"Table do not exhist"<<endl;
				return;
			}
			vector<string> keys;
			for(int i=0;i<TABLE_SIZE;i++){
				Node* temp=this->array[i];
				if(temp==NULL) continue;
				while(temp!=NULL){
					keys.push_back(temp->key);
					temp=temp->next;
				}
			}
			cout<<"[";
			for(int i=0;i<keys.size();i++){
				if(i!=keys.size()-1) cout<<keys[i]<<",";
				else cout<<keys[i];
			}
			cout<<"]"<<endl;
		}
		void getValues(){
		//gets all values
			if(this->deleted){
				cout<<"Table do not exhist"<<endl;
				return;
			}
			vector<string> values;
			for(int i=0;i<TABLE_SIZE;i++){
				Node* temp=this->array[i];
				if(temp==NULL) continue;
				while(temp!=NULL){
					values.push_back(temp->value);
					temp=temp->next;
				}
			}
			cout<<"[";
			for(int i=0;i<values.size();i++){
				if(i!=values.size()-1) cout<<values[i]<<",";
				else cout<<values[i];
			}
			cout<<"]"<<endl;
		}
		void getItems(){
		//gets all items
			if(this->deleted){
				cout<<"Table do not exhist"<<endl;
				return;
			}
			for(int i=0;i<TABLE_SIZE;i++){
				Node* temp=this->array[i];
				if(temp==NULL) continue;
				while(temp!=NULL){
					cout<<"["<<temp->key<<":"<<temp->value<<"]\t";
					temp=temp->next;
				}
				cout<<endl;
			}
		}
};
int main(){
	Hash hashTable;
	hashTable.hashSet("sarkar","pritam");
	hashTable.hashSet("jas","eshani");
	hashTable.hashSet("daas","jaguli");
	hashTable.hashSet("vindho","vusha");
	hashTable.hashSet("banerjee","rahul");
	hashTable.hashSet("kundu","pujki");
	hashTable.hashSet("kundu","pujok");
	hashTable.hashSet("badmmm","papa");
	hashTable.hashGet("badmmm");
	hashTable.hashGet("sarkarr");
	hashTable.hashGet("sarkar");
	hashTable.hashGet("badam");
	hashTable.hashGet("kundu");
	hashTable.hashGet("banerjee");
	hashTable.hashSet("banerjee","rahulukul");
	hashTable.hashGet("banerjee");
	hashTable.hashGet("daas");
	hashTable.hashDelete("daas");
	hashTable.hashGet("daas");
	hashTable.hashDelete("daas");
	hashTable.showTable();
	hashTable.getKeys();
	hashTable.getValues();
	hashTable.getItems();
	hashTable.dropTable();
	hashTable.hashGet("badmmm");
	hashTable.hashGet("sarkarr");
	hashTable.hashGet("sarkar");
	return 0;
}
