#include <stdio.h>
int main(){

  int first,last,i,l=2, j=0;
   printf("enter the first number \n");
   scanf("%d",&first);
   printf("enter the last number");
   scanf("%d",&last);
   for(i=first;i<=last;i++)
  
     {  j=0,l=2;
       if(i!=1)
	 {
	  while(l<=i/2)

	 {if(i%l==0)
	     {  j++;

	     }
	   l++; 
	 }
       if(j==0)
	 { printf("\t%d",i);
	 } 
	 }
     }
   return 0;     
}  
