#include<stdio.h>
#include<string.h>


int main(){
  int n,m,i,c=0,flag=0;
  char a[100];
  gets(a);
  n=strlen(a);
  char b[100];
  gets(b);
  m=strlen(b);
  for(i=0;i<n;i++)
  {
  	if(a[i]==b[0])
     {
     	for(int j=0;j<m;j++)
     	 {
		  if(a[i+j]!=b[j])
            {
			 flag=1;
			 break;
			}
		 }
     if(flag==0)
	    c++;
	 else
	   flag=0;  	     	
	 }
  }
 printf("%d",c);
 

}
