#include<iostream>
using namespace std;
class animal{
	public:
	~animal(){
		cout<<"animal destructor called"<<endl;
	}
};
class dog:public animal{
	public:
		~dog(){
			cout<<"Dog destructor called."<<endl;
		}
};
int main(){
	dog D;
}