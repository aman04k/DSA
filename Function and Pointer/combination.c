#include<stdio.h>
#include<math.h>
int main()
{ 
    int n, r,nfact=1,nrfact=1,rfact=1;
    printf("Enter a number n : ");
    scanf("%d",&n);
    printf("Enter a number r : ");
    scanf("%d",&r);
    for(int i=2; i<=n; i++)
    {
        nfact=nfact*i;
    }
    for(int i=2; i<=r; i++)
    {
        rfact=rfact*i;
    }
    for(int i=2; i<=n-r; i++)
    {
        nrfact=nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}