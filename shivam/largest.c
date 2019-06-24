#include <stdio.h>
#include <stdlib.h>
void  largest(int *,int n);
int main(){
  int *p,i,n,*t,s;

   printf("enter the number of element you want to enter\n");
   scanf("%d",&n);
   p=( int *) malloc(n*sizeof(int));
   t=p;
   printf("enter the element\n");
   for(i=0;i<n;i++)
     {
       scanf("%d",&p[i]);
       
     }
    largest(t,n);
   
     
   return 0;
}
void largest(int *a,int n)
{
   int l,t,i,s;
   l=a[0];
   for(i=0;i<n;i++)
   {
       if(l<a[i])
           l=a[i];
   }
   if(a[0]!=l)
     s=a[0];
   else
     s=a[1];
   for(i=0;i<n;i++)
     {
       if(a[i]!=l)
	 {	 
            if(s<a[i])
	    {s=a[i];
	    }
	 }
     }
   printf("second largest number is %d",s);
 
}

	     
		  
		  
		 		  
		 		  
   
