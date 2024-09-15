#include<iostream>
#include<stdexcept>
using namespace std;

int main() {
    string email;
    cout << "Enter your email: " << endl;
    cin >> email;

    try {
        bool foundAt = false;
        
        for (char c : email) {
            if (c == '@') {
                foundAt = true;
                break;
            }
        }

        if (!foundAt) {
            throw runtime_error("Invalid email Id!!!");
        }

        cout << "Email Id is valid." << endl;
    } catch (runtime_error& e) {
        cout << "Exception caught...\n" << e.what() << endl;
    }

  

    return 0;
}