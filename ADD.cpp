#include<iostream>
using namespace std;
template <class T>
void Add(T x,T y){
   T add=x+y;
   cout<<"Addition:"<<add<<endl;

}
int main(){
    int x=10,y=20;
    cout<<"For integer:"<<endl;
    Add(x,y);
    char a='A',b='B';
    cout<<"For character:"<<endl;
    Add(a,b);
    string m="micheal" ,n="br";
    cout<<"For string:"<<endl;
    Add(m,n);


 return 0;
}