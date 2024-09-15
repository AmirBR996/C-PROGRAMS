#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		int CC;
		car(){
		}
		car(string brand,int CC){
			this->brand=brand;
			this->CC=CC;
		}
};
class person{
	public:
		string name;
		int age;
	    car C;
	    person(string name,int age,car C){
	    	this->name=name;
	    	this->age=age;
	    	this->C=C;
		}
		void printdetails(){
			cout<<name<<" has car "<<C.brand<<endl;
			cout<<"Age of "<<name<<" is "<<age<<endl;
			cout<<"The CC of car is "<<C.CC<<" CC"<<endl;
		}
	    
};
int main(){
	car C("Toyota",1000);
	person P("Amir",18,C);
	P.printdetails();
	return 0;
}