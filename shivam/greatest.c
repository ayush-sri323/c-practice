#include <stdio.h>
#include <stdlib.h>
int main(){
  int *p , i , n ;
  printf("enter the number of element you want to enter\n");

    p= (int*) malloc(n*sizeof (int));

    printf("\n%p",p);

    for(i=0;i<n;i++){

      scanf("%d",p[i]);

    }
    printf("\n%d",p);

    for(i=0;i<n;i++)
      { printf("%p",p[i]);

      }
    return 0;
} 
