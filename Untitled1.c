#include<stdio.h>


int str(char a[],int i)
{
  if(a[i]=='\0')
   return i;
  else
    return (str(a,++i));
}


int main()
{
  char a[10];
  int l;
  gets(a);
  l=str(a,0);
  printf("%d",l);
  return 0;
}
