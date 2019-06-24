#include <stdio.h>
int main(){
  int n , i , sum=0 , l;
   printf("enter the number\n");
   scanf("%d",&n);
   if(n<0)
     n=-1*n;
   for(i=1;i<=n/2;i++)
     {
       if(n%i==0)
	 {
	   sum+=i;

	 }
     }
   if(sum==n)
     printf("the number is perfect number");
   else
     printf("the number is not perfect number");
   return 0;
}
  
