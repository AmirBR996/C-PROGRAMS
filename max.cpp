#include<iostream>
using namespace std;
template <class T>
void Maximum(T x,T y){
   if(x>y){
    cout<<"Maximum:"<<x<<endl;
   }
   else{
    cout<<"Maximum:"<<y<<endl;
   }

}
int main(){
    int x=10,y=20;
    cout<<"For integer:"<<endl;
    Maximum(x,y);
    char a='A',b='B';
    cout<<"For character:"<<endl;
    Maximum(a,b);


 return 0;
}