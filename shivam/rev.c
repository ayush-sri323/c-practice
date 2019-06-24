#include <stdio.h>
#include <math.h>
int main(){

   int n,i=0,r,t,l,c,rev=0;
   printf("enter the number");
   scanf("%d",&n);
   t=n;
   while(n>0)
    {
      i++;
      n=n/10;
    }
     l=i-1;
     n=t;
      while(n>0){

                  r=n%10;
                  c=pow(10,l);
                  rev=rev+c*r;
                  l--;
                  n=n/10;

                 }
   printf("reverse number =%d",rev);
  return 0 ;
}
