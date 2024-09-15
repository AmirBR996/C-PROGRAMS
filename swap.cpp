#include<iostream>
using namespace std;
template<class T>
void swapValues(T *a,T *b){
    T temp=*a;
    *a = *b;
    *b = temp;
}
int main(){
    int a=15,b=25;
    cout<<"For integer:"<<endl;
    cout<<"Before swapping:"<<endl;
    cout<<"a="<<a<<","<<"b="<<b<<endl;
    swapValues(&a,&b);
    cout<<"After swapping:"<<endl;
    cout<<"a="<<a<<","<<"b="<<b<<endl;
   string x="micheal",y="br";
   cout<<"For string:"<<endl;
    cout<<"Before swapping:"<<endl;
    cout<<"x="<<x<<","<<"y="<<y<<endl;
    swapValues(&x,&y);
    cout<<"After swapping:"<<endl;
    cout<<"x="<<x<<","<<"y="<<y<<endl;
    return 0;
}