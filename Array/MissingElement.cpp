#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int missingElement = total - sum;
     cout << "The missing element is: " << missingElement << endl;
      return 0;
}
    
    
    

   
    
    

    
    

  
