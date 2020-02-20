//palindrome using recurssion
#include<stdio.h>
#include<string.h>


int str(char a[],int i,int n)
{
  if(a[i]=='\0')
   return 1;
  if(a[i]!=a[n-1-i])
    return 0;
  else
    return(str(a,++i,n));
}



int main()
{
  char a[10];
  int l,k;
  gets(a);
  l=strlen(a);
  k=str(a,0,l);
  printf("%d",k);
  return 0;
}
