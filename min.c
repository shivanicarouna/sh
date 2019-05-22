#include<stdio.h>
void main()
{
int n,a[200],i,p;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);


}
p=a[0];

for(i=1;i<n;i++)
{
if(p>a[i])
p=a[i];
}
printf("%d",p);

}
