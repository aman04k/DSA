#include <iostream>
int <vector>
using namespace sdt;

bool checkSorted(vector<int> &arr, int& n, int i){
    if(i==n-1){
        return true;
    }  
    if(arr[i+1]<arr[i]){
        return false;
        return checkSorted(arr,n,i+1);
    }
}
int main(){
    vector<int>{10,20,30,40,50,60};
    int n=v.size();
    int i=0;
    bool isSorted=checkSorted(v,n,i);
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    else{
        count<<"Array is not sorted"<<endl;
        }
        return 0;
        
    }




}