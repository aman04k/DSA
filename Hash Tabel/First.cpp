  #include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> aman;

    pair<string, int> r;
    aman.insert(r);

    pair<string, int> a;
    aman.insert(a);

    pair<string, int> f("aman", 40);
    aman.insert(f);

    cout << aman.size()<<endl;
    cout<<aman.at("aman")<<endl;
    cout<<aman["aman"];
    return 0;
}
