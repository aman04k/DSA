#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c,n;
    cout<<"Enter a Number :";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int  i=2; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
   
}