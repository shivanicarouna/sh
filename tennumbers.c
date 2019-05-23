#include<stdio.h>
void main()
{
int n=10,a[200],i,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=a[0];

for(i=1;i<n;i++)
{
if(a[i]>t)
t=a[i];
}
printf("%d",t);

}
