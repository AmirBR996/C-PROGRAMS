#include<iostream>
using namespace std;

class animal{
    public:
    virtual void  speak()=0;
};
class dog:public animal{
public:
void speak(){
    cout<<"Dog is barking."<<endl;
}
};
class cat:public animal{
public:
void speak(){
    cout<<"Cat is meowing."<<endl;
   }
};
int main(){
    animal*A[2];
     A[0]= new dog;
     A[1] = new cat;
   for(int i=0;i<=1;i++){
    A[i]->speak();
   }
     for(int i=0;i<=1;i++){
    delete A[i];
   }
     return 0;
}