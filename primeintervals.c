#include <stdio.h>
int main()
{
    int n,q,i,count;
    scanf("%d %d",&n,&q);
    while (n < q)
    {
    count= 0;
    for(i = 2; i <= n/2; i++)
    {
    if(n % i == 0)
    {
    count++;
    break;
    }
    }
    if (count == 0)
    printf("%d ", n);
    n++;
    }
    }
    
