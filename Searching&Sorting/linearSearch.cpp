#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 67, 89, 34, 56, 78, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    cout << "Enter the number you want to search for: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            cout << "Element found at index " << i << endl;
            break; // Once found, exit the loop
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
