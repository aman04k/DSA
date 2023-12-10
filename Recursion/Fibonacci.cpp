  #include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int n, ans;
    cout << "Enter a number: ";
    cin >> n;

    ans = Fibonacci(n);
    cout << n << "th term in Fibonacci sequence is: " << ans << endl;

    return 0;
}
