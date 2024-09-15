#include<iostream>
using namespace std;
class number{
public:
int num,result;
void setdata(int n){
    num=n;
}
void add(number N1,number N2){
    result=N1.num+N2.num;
    cout<<"The addition is:"<<result<<endl;
}
};
int main(){
    number N1,N2,N3;
    N1.setdata(10);
    N2.setdata(30);
    N3.add(N1,N2);
    return 0;

}