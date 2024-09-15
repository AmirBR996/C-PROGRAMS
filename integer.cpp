#include <iostream>
#include <stdexcept> 
using namespace std;

int main() {
    string numbers;
    cout << "Enter the number: ";
    cin >> numbers;

    bool result = true; 

    for (int i = 0; i < numbers.length(); i++) {
        char number = numbers[i];
        if (number == '-') {
            if (i != 0 || numbers.length() == 1) {
                result = false;
                break;
            }
        } else if (number < '0' || number > '9') {
            result = false;
            break;
        }
    }

    try {
        if (result) {
            cout << "Valid.." << endl;
        } else {
            throw runtime_error("Invalid...");
        }
    }
    catch (runtime_error& e) {  
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
