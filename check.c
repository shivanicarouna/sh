#include<stdio.h>
#include<conio.h>
void main()
{
int n;
scanf("%d",&n);
if(n%2==0)
{
printf("even");
}
else if(n<=0)
{
printf("invalid");
}
else
{
printf("odd");
}
}
