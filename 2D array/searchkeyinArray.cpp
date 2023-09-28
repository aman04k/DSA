#include <iostream>
using namespace std;
 bool findkey(int arr[][3], int rows, int cols, iny key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key)
                return true;
            
        }
    }
    return false;
 }
 void printRowisSum(int arr[][3], int rows, int cols){
    cout<<"printin row-size sum "<endl;
    for(int i=0; i<rows; i++){
        int sum=0;
    }
 }