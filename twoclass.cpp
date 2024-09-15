#include <iostream>
using namespace std;

class ClassB; 

class ClassA {
private:
    int valueA;

public:
    ClassA(int v) : valueA(v) {}

   
    friend void swapValues(ClassA &a, ClassB &b);

    
    void display() const {
        cout << "ClassA value: " << valueA << endl;
    }
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int v) : valueB(v) {}

    
    friend void swapValues(ClassA &a, ClassB &b);

    void display() const {
        cout << "ClassB value: " << valueB << endl;
    }
};


void swapValues(ClassA &a, ClassB &b) {
    
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
 
    ClassA objA(5);
    ClassB objB(10);

   
    cout << "Before swap:" << endl;
    objA.display();
    objB.display();

 
    swapValues(objA, objB);

    cout << "After swap:" << endl;
    objA.display();
    objB.display();

    return 0;
}
