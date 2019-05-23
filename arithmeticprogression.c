#include <stdio.h>
void main()
{
int count=0,a,n,d,c;
scanf("%d%d%d",&a,&n,&d);
count=(a*(2*n+(a-1)*d))/2;
printf("%d",count);
}
