#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            for(int k=1; k<=5; k++)
            {
                for(int l=1; l<=5; l++)
                {
                    printf("*");
                }
                printf("\n");
            }
              printf("\t");
        }
        printf("\n");
    
    }

}