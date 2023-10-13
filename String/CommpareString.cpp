#include <iostream>
#include<string.h>
using namespace std;
int main(){
    string a = "Aman";
    string b = "Ankit";
    if(a.length() != b.length()){
        return false;
        for(int i=0; i<a.length(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
}