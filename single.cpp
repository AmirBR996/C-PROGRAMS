#include <iostream>
using namespace std;

class AddData // Base Class
{
public:
    int num1, num2;
    void accept()
    {
        cout << "Enter First Number: ";
        cin >> num1;
        cout << " Enter Second Number: ";
        cin >> num2;
    }
};

class Addition : public AddData 
{
    public:
    int sum;

    void add()
    {
        sum = num1 + num2;
    }

    void display()
    {
        cout << "Addition of Two Numbers: " << sum <<endl;
    }
};

int main()
{
    Addition a;
    a.accept();
    a.add();
    a.display();
    return 0;
}
