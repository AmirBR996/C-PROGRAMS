#include<iostream>
using namespace std;
class Employee{
public:
int emp_code;
string name;
void enterdata(){
    cout<<"Enter Employee code and name:";
    cin>> emp_code>>name;

}
void displaydetails(){
    cout<<"employee code:"<<emp_code<<endl;
  
    cout<<"Name:"<<name<<endl;
}
};
class Fulltime:public Employee{
    public:
    int daily_rate;
    int n_days;
    int salary;
    void Fullenterdata(){
        enterdata();
        cout<<"Enter daily rate and number of days";
        cin>> daily_rate>>n_days;

    }
    void fulldisplaydetails(){
        displaydetails();       
        cout<<"daily_rate:"<<daily_rate<<endl;
        cout<<"number of days:"<<n_days<<endl;
        cout<<"salary:"<< daily_rate*n_days<<endl;
    }

};
class Parttime:public Employee{
    public:
    int n_hours;
    int hourly_rate;
    int salary;
    void partenterdata(){
        enterdata();
        cout<<"Enternumber of hours , hourly rate and salary:";
        cin>> n_hours>>hourly_rate>>salary;

    }
     void fulldisplaydetails(){
        displaydetails();
        cout<<"hourly_rate:"<<hourly_rate<<endl;
        cout<<"number of hours:"<<n_hours<<endl;
        cout<<"salary:"<< hourly_rate*n_hours<<endl;
    }


};
int main(){
    int choice;
    int n;
    cout<<"Enter the number of employee you want:";
    cin>>n;
    Fulltime F[n];
    Parttime P[n];
    for(int i=0;i<n;i++){
    do {
        cout << "Menu:" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Search Employee by Code" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            int emp;
            cout<<"if your employee is full time then enter 1";
            cin>>emp;
            if(emp==1){
                F[n].Fullenterdata();

            }
            else{
                P[n].partenterdata();
            }
            break;
            case 2:
            cout<<"For full timers:"<<endl;
            F[n].fulldisplaydetails();
            cout<<"For Part timers:"<<endl;
            P[n].fulldisplaydetails();
            break;
            case 3:
            int code;
            cout<<"Enter the employee code:";
            cin>>code;
            if(code==F[n].emp_code){
                F[n].fulldisplaydetails();


            }
            else if(code==P[n].emp_code){
                F[n].fulldisplaydetails();

            }
            else{
                cout<<"Employee code  is not there"<<endl;
            }


            

        };
}while(choice>=1&&choice>5);


};
}