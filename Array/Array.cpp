#include<stdio.h>
int main()
{
     int arr[5];
     for( int i=0; i<=4; i++)
     {
     
     printf("%d Enter a element \n",i+1);
     scanf("%d",&arr[i]);
     }
     
        printf("%d",arr[3]);
     
     return 0;
}