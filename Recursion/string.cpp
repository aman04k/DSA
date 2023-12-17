#include <iostream>
using namespace std;

bool checkKey(string str, int i, int n, char key){
    if(i>=n){
        return false;

    }
    if(str[i]==key)
        return true;
    return checkKey(str,i+1, n,key);
    
}

int main(){
    string str="lovebabber";
    int n=str.length();

    char key='r';
    int i=0;
    bool ans=checkKey(str,i,n,key);
    cout<<"answer is: "<<ans<<endl;
    return 0;
}