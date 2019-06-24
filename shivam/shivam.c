#include <stdio.h>

int main(){

    int f , l , sum=0;

    printf(" enter the first number and the last number where do you want to some ");
    scanf("%d%d",&f,&l);
    while(f<=l){

      sum+=f;
      f++;

    }
    printf("sum = %d",sum);
    return 0;  
      
}  
  
