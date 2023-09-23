#include<stdio.h>
int main()
{
    int arr[7]={2,5,45,65,87,21,9};
    int x=45;
    for(int i=0; i<=6; i++)
    {
        if(arr[i]==x)
        {
            printf("%d is present in the array and it index is %d",x,i);
            break;
        }
    }
    return 0;
}