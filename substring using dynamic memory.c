#include<stdio.h>
#include<string.h>
#include<stdlib.h>




int main(){
  int n,m,i,c=0,flag=0;
  char *a,*b;
  scanf("%d %d",&n,&m);
  getchar();
  a=(char*)malloc(sizeof(char)*(n+1));
  b=(char*)malloc(sizeof(char)*(m+1));
  gets(a);
  getchar();
  gets(b);
  for(i=0;i<n;i++)
  {
  	if(*(a+i)==*b)
     {
     	for(int j=0;j<m;j++)
     	 {
		  if(*(a+i+j)!=*(b+j))
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
