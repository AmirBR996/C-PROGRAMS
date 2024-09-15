#include<iostream>
using namespace std;

class vechile{
    public:
    virtual void  start()=0;
       
    
};
class car:public vechile{
public:
void start(){
    cout<<"Car is starting."<<endl;
}
};
class motorcycle:public vechile{
public:
void start(){
    cout<<"Motorcycle is starting."<<endl;
   }
};
int main(){
    vechile* V1 = new car; 
    vechile* V2 = new motorcycle;
    V1->start();
    V2->start();
    delete V1;
    delete V2;
   
     return 0;
}