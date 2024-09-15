#include<iostream>
using namespace std;

template<typename T>
class Student {
    public:
    T marks[5];
    int flag = -1;

    void push(T num) {
        if(flag < 4) {
            flag++;
            marks[flag] = num;
        } else {
            cout << "Stack is full" << endl;
        }
    }

    void pop() {
        if(flag == -1) {
            cout << "Stack is empty." << endl;
        } else {
            flag--;
        }
    }

    void printdetails() {
        cout << "Stack is :" << endl;
        for(int i = 0; i <= flag; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Student<int> S;  
    S.push(5);
    S.push(12);
    S.push(9);
    S.push(76);
    S.push(45);
    S.pop();  
    S.printdetails();

    return 0;
}
