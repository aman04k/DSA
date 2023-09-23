#include<stdio.h>
int main()
{ int max= -1;
   int arr[10]={10,12,102,120,14,15,16,1020,9,7};
   for(int i=0; i<10; i++)
    {
        printf("%d",arr[i]);
    }
    if (max<arr[i])
    {
        max = arr[i];
    }
    return 0;
}