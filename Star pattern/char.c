#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0; i<=2*n-1; i=i+2 )
    {
        for(int j=65; j<=-1; j=j-2)
        {
            for(int k=1; k<=n; k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}