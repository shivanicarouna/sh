#include<stdio.h>
void main()
{
int p,a[10];
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
p=a[0];
 for(int i=0;i<10;i++)
 {
if(p<a[i])
{
p=a[i];
}
}
printf("%d",p);
}
