#include<stdio.h>
int main()
{
    int arr[7]={1,2,7,5,8,5,5};
    for(int i=0; i<=6; i++){
    for(int j=i+1; j<=6; j++){
    if(arr[i]==arr[j]) {
        printf("%d\n is duplicate element ",arr[i]);
        break;
    }   
    }
    }
    
    return 0;
    
}