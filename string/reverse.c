#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* string,int);

int main(){
  // Input string
  char a[100];
  int l;
  
  // gets(a);
  scanf("%s",a);
  fflush(stdin);					\
   l=strlen(a);
  
  // Print String
   printf("%s",a);
   
  // Reverse String
   reverse(a,l);    
 
  // Print String
  

}
void reverse(char* string , int l)
{
  int i, temp, j=l-1;
  for(i=0;i<j;i++)
    {
      temp= string[0];
      string[0]= string[j];
      string[j]= temp;
      j--;
      
      
     
    }  

  printf("%s",string);  
}  


