#include<iostream>
using namespace std;
template <class T>
T Division(T x,T y){
   if(y==0){
    return 0;
   }
   else{
    return x/y;
   }

}
int main(){
    int x=10,y=0;
    float a=10.5,b=123.3;
    cout<<"For integer:"<<endl;
    try{
    if(Division(x,y) == 0){
    throw runtime_error("Division by zero.");
    }
    cout<<"Result :"<<  Division(x,y)<<endl;
    }
    catch(runtime_error e){
    cout<<"exception:"<<e.what()<<endl;
}
  cout<<"For floating point:"<<endl;
   try{
    if(Division(a,b) == 0){
    throw runtime_error("Division by zero.");
    }
    cout<<"Result :"<<  Division(a,b)<<endl;
    }
    catch(runtime_error e){
    cout<<"exception:"<<e.what()<<endl;
}
    


 return 0;
}