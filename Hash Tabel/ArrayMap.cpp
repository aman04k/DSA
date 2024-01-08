 #include <iostream>
#include<unordered_map>
using namespace std;
void cuntiHemant(unordered_map<char,int>&aman,string str){
for(int i=0; i<str.length(); i++){
    char ch = str[i];
    aman[ch]++;
}
}

int main(){
    string str="lovebabber";
    unordered_map<char,int>aman;
    cuntiHemant(aman,str);
    for(auto i: aman){
        cout<<i.first << " => "<< i.second <<endl;
    }

    return 0;
    

}