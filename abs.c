#include<stdio.h>
#include<stdlib.h>
void main()
{
int h1,h2,m1,m2,h,m;
scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
h1=h1-h2;
m1=m1-m2;
h=abs(h1);
m=abs(m1);
printf("%d %d",h,m);
    
}  
