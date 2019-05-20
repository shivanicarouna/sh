#include<stdio.h>

void main()
{
char n;
scanf("%c",&n);
  if((n>=32)&&(n<=64) ||(n>=94)&&(n<=95)||(n>=123)&&(n<=127))
  {
    printf("invalid");
  }
  
else if((n=='a') ||(n=='e')||(n=='i')|| (n=='o') || (n=='u'))
{
printf("vowel");
}
else
{
  printf("consonant");
}
}

