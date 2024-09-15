#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
float num1,num2;
float z;
cout<<"Enter number 1:";
cin>>num1;
cout<<"Enter number 2:";
cin>>num2;
try{
if(num2==0){
throw runtime_error("Division by zero.");
}
float division= num1/num2;
cout<<"Result :"<< division<<endl;
}
catch(runtime_error e){
cout<<"exception:"<<e.what()<<endl;
}
cout<<"Others code..."<<endl;

return 0;
}