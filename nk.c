#include <stdio.h>
void main()
{
int a[200],i,n,k,p=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
    p=p+a[i];
    
}
printf("%d",p);
}
