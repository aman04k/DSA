#include <iostream>
using namespace std;
int main(){
    int arr[]={10,1,7,6,14};
    int n=sizeof(arr) / sizeof(arr[0]);
     for(int i=1; i<n; i++){
        for( int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            
        } 
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
     
    return 0;
}