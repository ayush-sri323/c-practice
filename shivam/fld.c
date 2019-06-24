#include <stdio.h>
int main(){

  int n,i=0,t,r;
  int j=0;
  printf("enter the number=");
  scanf("%d",&n);
  t=n;
  while(n>0)
    {  
      j++;
      n=n/10;
    }
  n=t;
  while(n>0)
    {
      r=n%10;
      if(i==0)
	printf("first digit is =%d",r);
      i++;
      if(i==j)
	printf("last digit is =%d",r);
      
      
      n=n/10;
    }
  return 0;
}
