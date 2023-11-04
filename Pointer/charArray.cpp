#include <iostream>
using namespace std;
int main(){ 
    char ch[10]="aman";
    char* c=ch;
    cout<<c<<endl;
    cout << ch << endl;
    cout << &ch << endl;
    cout << *c << endl; 
    return 0;
}