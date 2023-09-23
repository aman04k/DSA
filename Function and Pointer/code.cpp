#include<iostream>
using namespace std;
int permutation(int n){
    int fact = 1;
    for(int i=n;i>=1;i--){
        fact *= i;
    }
    return fact;
}
int main(){
    cout<<"Permutation:"<<permutation(5);
    return 0;
}