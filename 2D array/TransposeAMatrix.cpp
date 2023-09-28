#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {5, 4, 6}, {4, 5, 7}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;  // Add a newline after each row of input
    }

    return 0;
}
