#include <iostream>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"Enter a string : ";
//cin>>str;
getline(cin,str);
cout<<str<<endl;
cout<<"Length"<<str.length()<<endl;

}