
#include <stdio.h>
void main()
{
int n,q,i,t,p,r;
scanf("%d %d", &n, &q);
for(i=n+1; i<q;i++)
{
t=i;
p=0;
while(t!=0)
{
r=(t%10);
p+=r*r*r;
t/=10;
}
if(i==p)
{
printf("%d ",i);
}
}

