#include<stdio.h>
void main()
{
int n,a[200],i,j,temp,l,count,k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);


}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    for(i=0;i<n;i++)
    {
       
        
        a[k]=a[i];
       count++;
        k++;
    }
    if(count>0)
    {
        
    k=count/2;
    printf("%d",a[k]);
    }
        
        
        
    
    }
