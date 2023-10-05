 #include <iostream>
 #include<vector>
 using namespace std;
 int findPivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid<=e && arr[mid]>arr[mid+1])
        return mid;

    if(mid-1>=s && arr[mid-1]>arr[mid])
    return mid-1;

    if(arr[s]>arr[mid])
    e=mid-1;
else
    s=mid+1;
    }
    return -1;
 }   

 int main(){
 vector<int> arr{9,10,2,4,6,8};
 int ans= findPivot(arr);
 if(ans==-1){
    cout << "kuch gadbad hai"<<endl;

 }
 else{
    cout <<"Ans is at index"<<ans<<endl;
    cout<<"value of anse is "<<arr[ans]<<endl;
 }
 return 0;
 }
