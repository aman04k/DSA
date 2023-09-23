#include<stdio.h>
int main()
{
    int n;
    printf("Enter a row number: ");
    scanf("%d",&n);
    int m;
    printf("Enter a colom number: ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}