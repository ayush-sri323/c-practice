#include <stdio.h>
 void bin(int , int); 
    int main(){

      int n,i=31;
      printf("enter the decimal number");
      scanf("%d",&n);
      bin(n,i);

    }

      void bin(int n,int i){
   
        int k;
         if(i<0)
         return ;
        k=n>>i;

        if(k&1)
       printf("1");
       else
       printf("0");
      bin(n,--i);
}
  
	

         
