#include<iostream>
using namespace std;
class marks{
public:
int sub1,sub2,sub3;
void getmarks(){
    cout<<"Enter Marks in three subjects:"<<endl;
    cout<<"Subject one:";
    cin>>sub1;
    cout<<"Subject two:";
    cin>>sub2;
    cout<<"Subject three:";
    cin>>sub3;
}

};
class sum:public marks{
    public:
    int sum;
    void totalsum(){
        sum=sub1+sub2+sub3;
        cout<<"The totalsum is :"<<sum<<endl;
    }
};
class percentage:public sum{
    public:
    float percentage;
    void calpercentage(){
        percentage=sum/3;
        cout<<"The total percentage is :"<<percentage<<endl;
        
    }
   
};
int main(){
    percentage P;
    P.getmarks();
    P.totalsum();
    P.calpercentage();
}
