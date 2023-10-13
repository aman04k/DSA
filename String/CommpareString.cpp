#include <iostream>
#include <string>  // Include the necessary header for strings
using namespace std;

int main() {
    string a = "Aman";
    string b = "Ankit";

    // Check if the lengths of the strings are equal
    if (a.length() != b.length()) {
        cout << "The strings are not equal in length." << endl;
    } else {
        bool equal = true;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i]) {
                equal = false;
                break;  // Exit the loop early since we've found a difference
            }
        }

        if (equal) {
            cout << "The strings are equal." << endl;
        } else {
            cout << "The strings are not equal." << endl;
        }
    }

    return 0;
}
