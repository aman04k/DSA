#include <iostream>
#include <vector>
using namespace std;

int main()
{
   
    int arr[]={1,2,5,3,8};
    int sizea=5;
    int brr[]={4,5,2,8};
    int sizeb=4;

     vector<int>ans;
    
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);

    }
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }
    cout<<"Printing ans array"<<endl;
    for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
    

}
}