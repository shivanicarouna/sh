#include<stdio.h>
#include<string.h>
void main()
{
    char s[200];
    int i,count=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
    if((s[i]>=48)&&(s[i]<=57))
    {
        count++;
    }
   
    }
   printf("%d",count);
    
}
