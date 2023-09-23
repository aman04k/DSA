#include <iostream>
using namespace std;
int main(){
    int n, fact=1;
    cout<<"Enter a value";
    cin >> n;
    if(n<0)
    cout << "Error! Factorial of a negative number doesn't exist.";
else{
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
        cout<<"fact"<< n <<"="<<fact;
}
    
    return 0;

}