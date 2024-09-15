#include<iostream>
using namespace std;
class account{
	public:
		int amount;
		int inter;
		virtual void deposit(int x){	
		}
		virtual void withdraw(int x){
		}
		virtual void interest(){
		}
};
class savingaccount:public account{
	public:
		savingaccount(int a,int i){
			amount=a;
			inter=i;
		}
		void deposit(int depo){
			cout<<"The current balance is "<< amount<<endl;
			amount=amount+depo;
			cout<<"The new balance is "<< amount<<endl;
		}
		void withdraw(int with){
			if(with>amount){
				cout<<"Insufficient balance."<<endl;
			}
			else{
				amount=amount-with;
				cout<<"Withdrawing "<<with<<endl;
				cout<<"The remaining balance is "<<amount<<endl;
			}
		}
		void interest(){
			float total=(float(inter)/100 )* float(amount);
			cout<<"The obtained interest is "<<total<<endl;
		}
};
class Checkingaccount :public account{
        public:
		Checkingaccount(int a,int i){
			amount = a;
			inter = i;	
		}
		void deposit(int depo){
			cout<<"The current balance is "<< amount<<endl;
			amount=amount+depo;
			cout<<"The new balance is "<< amount<<endl;
		}
		void withdraw(int with){
			if(with>amount){
				cout<<"Insufficient balance."<<endl;
			}
			else{
				amount=amount-with;
				cout<<"Withdrawing "<<with<<endl;
				cout<<"The remaining balance is "<<amount<<endl;
			}
		}
		void interest(){
			float total=(float(inter)/100 )* float(amount);
			cout<<"The obtained interest is "<<total<<endl;
		}
};
int main(){
	account* A1=new savingaccount(100000,10);
	account* A2= new Checkingaccount(5000,5);
    A1->interest();
	A1->deposit(10000);
    A1->withdraw(20000);
    A2->interest();
	A2->deposit(1000);
    A2->withdraw(400);

}