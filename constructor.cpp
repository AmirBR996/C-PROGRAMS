#include<iostream>
using namespace std;
class Animal{
	public:
		string name;
		Animal(string n){
			n=name;
			cout<<"Animal is running"<<endl;
		}
};
class Dog:public Animal{
	public:
 Dog(string name):Animal(name){
 	cout<<"Dog is running"<<endl;
 }
};
int main(){
	Dog D("puppy");
	
	return 0;
}