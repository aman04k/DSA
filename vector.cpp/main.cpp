#include <iostream>
#include <vector>
using namespace std;

int main(){
    //create a vector
    vector<int>arr; 

    //int ans=(sizeof(arr)/sizeof(int));
    //  cout << ans <<endl;

    cout <<arr.size() << endl;
    cout << arr.capacity() <<endl;

    //insert
    arr.push_back(5);
    arr.push_back(6);
    
    //print
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    //remove or delet
    arr.pop_back(); 
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << "  ";
    }
     cout << endl;
     vector<int>brr(10);
     cout <<" size of brr " << brr.size() << endl;
    
    return 0;
}