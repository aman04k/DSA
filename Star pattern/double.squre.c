#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            for(int k=1; k<=8; k++)
            {
                for(int l=1; l<=5; l++)
                if(i%2==0 && k%2==0 || i%2!=0 && k%2!=0)
                printf("*");
                else
                   printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
}