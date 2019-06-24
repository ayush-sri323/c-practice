#include <stdio.h>
int main(){
  int a,b,i,ans=1,l;
  printf("enter the number a and b\n");
  scanf("%d%d",&a,&b);
  if(a>b)
    l= a;
  else
    l= b;
  for(i=2;i<=l;i++)
     {
       while(a%i==0||b%i==0)
	 {
	 if(a%i==0||b%i==0)
	{
	  ans*=i;

	}
      if(a%i==0)
	a=a/i;
      if(b%i==0)
	b=b/i;
	 }

    }
  printf("\nlcm=%d",ans);
}
