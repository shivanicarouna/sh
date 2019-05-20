#include<stdio.h>
void main()
{
    int n, sum=0,count=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        
    
    r=n%10;
   
    count++;
    n=n/10;
    }
    printf("%d",count);
}
