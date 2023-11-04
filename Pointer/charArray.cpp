#include <iostream>
using namespace std;  
int main(){ 
    // char ch[10]="aman";
    // char* c=ch;
    // cout<<c<<endl;
    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << *c << endl; 

    char name[9]="SherBano";
    char* c=&name[0];
    
    cout << name << endl;
    cout << &name << endl;
    cout << *(name+3) << endl;
    cout << c << endl;
    cout << &c << endl;
    cout << *c << endl;
    cout << c+2 << endl;
    cout << c+8 << endl;
    return 0;
}