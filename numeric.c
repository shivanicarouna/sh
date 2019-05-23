
#include <stdio.h>
#include<ctype.h>
int main()
{
    char s;
    scanf("%c",&s);
    if(isdigit(s))
    {
    printf("yes");
    }
    else
    {
    printf("No");
    }
 return 0;
}
