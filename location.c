#include<stdio.h>
void main()
{
int a[200],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d %d\n",a[i],i);
}
}
