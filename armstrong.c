#include<stdio.h>
void main()
{
int n,r,count=0,sum=0,j,q,b,o;
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
o=pow(b,count);
sum=sum+o;
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

