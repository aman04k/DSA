#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str); // Read the input as a full line

    // Reverse the string
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
