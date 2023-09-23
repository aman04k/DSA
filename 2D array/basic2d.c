#include<stdio.h>
int main()
{
    int arr[4][4]={{1,2,3,4},{4,5,6,1},{1,4,5,8},{4,1,2,5}};
    for(int i=0; i<=3; i++){
             for(int j=0; j<=3; j++){
                 printf("%d ",arr[i][j]);
             }
              printf("\n");
    }
    return 0;
   
        
    
}