#include <stdio.h>
#include <stdlib.h>
int main(){
  char  s[2];
    int i=0;
    printf("enter the alphabet");
    while(i<2)
      {  fflush(stdin);
	scanf("%c",&s[i]);
	fflush(stdin);
	++i;
      }
    
   
    i=s[0];
  
    while(i<=s[1]){

    printf("%c",i);
    i++;
  }
  return 0 ;

}
  
