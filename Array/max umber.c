#include<stdio.h>
int main()
{ 
   int arr[10]={10,12,102,120,14,15,16,1020,9,7};
   int max= -1;
   for(int i=0; i<10; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d",max); 

    return 0;
}