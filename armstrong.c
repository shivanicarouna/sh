#include<stdio.h>
void main()
{
int n,r,count=0,sum=0,j,q,b;
scanf("%d",&n);
j=n;
q=n;
while(n!=0)
{
r=n%10;
count++;
n=n/10;
}
while(j!=0)
{
b=j%10;
sum=sum+pow(b,count);
j=j/10;
}
if(q==sum)
{
printf("yes");
}
else
{
printf("no");
}
}

