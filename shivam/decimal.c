#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

   int n,i=0,b=0,r;
   long int c=1;
   printf("enter the number you want to convert in binary=");
   scanf("%d",&n);
   while(n>0)
     {
       r=n%2;
       
       b=b+c*r;
       n=n/2;
       ++i;
       c=pow(10,i);
     }

   printf("the binary number is=%d",b);
   return 0;

}
