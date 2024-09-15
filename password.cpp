#include <iostream>
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

bool containsDigit(const string& str) {
    for (char c : str) {
        if (isdigit(c)) {
            return true;
        }
    }
    return false;
}

int main() {
    string name, password;
    
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter password: ";
    cin >> password;
    
    int passlen = password.length();
    
    try {
        if (passlen < 6 && !containsDigit(password)) {
            throw runtime_error("Password is invalid. .");
        }

        cout << "Password is valid!!" << endl;
    } 
    catch (const runtime_error& e) {
        cout << " It must be at least 6 characters long and contain at least one digit.\n" << e.what() << endl;
    }

    

    
}