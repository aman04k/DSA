#include <iostream>
using namespace std;
int findSqrt(int n){
    int target;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        if(mid*mid>target){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number " << endl;
    cin>>n;
    int ans=findSqrt(n);
    cout<<"Ans is = "<<ans<<endl;
    return 0;
}