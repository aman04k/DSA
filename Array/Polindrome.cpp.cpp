#include <iostream>
using namespace std:
int main()
{
 int n,digit,num,rev=0;
 cout<<"Enter anumber : ";
 cin>>"num";
 n=num;
 do
 {
    digit=n%10;
    rev=(rev*10)+digit;
    rev=(rev/10);
 } while (num!=0);
   cout<<"the revers of the number :";
   if(n==rev)
   cout<<"the number is a polindrome: ";
   else
   cout<<"the number is not polindrome :";
   return 0;
 
 
}