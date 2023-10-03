#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=a+b;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2; i<=n; i++){
        a=b;
        b=c;
        c=a+b;
        {
            printf("%d ",c)
            
        
            
        }
    }
}