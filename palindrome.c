#include<stdio.h>
void main()
{
int n,a[50],r,count=0,s;
scanf("%d", &n);
s=n;
while(n!=0)
{
r=n%10;
count=(count*10)+r;
n=n/10;
}
if(count==s)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
    
    
