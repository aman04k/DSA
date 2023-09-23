#include<stdio.h>
int main ()
{
    int marks[10]={95,100,50,65,97,89,30,90,31,25};
    for(int i=0; i<10; i++)
    {
        if(marks[i]<35)
        printf("%d ",i);
    }
    return 0;
}