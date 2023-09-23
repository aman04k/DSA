#include<stdio.h>
int main()
{
    int arr[5]={1,1,2,5,6};
   for(int i=0; i<5; i++){
   printf("%p\n",&arr[i]);
}
return 0;


}