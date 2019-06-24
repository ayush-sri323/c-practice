#include <stdio.h>
void bata(int);
int main(){

  int n,i,t,r,s=0;
  int j=0;
  printf("enter the number");
  scanf("%d",&n);
  t=n;
  while(n>0)
    {
      j++;
      n=n/10;
    }
  n=t;
  while(t>0)
    

    {r=t%10;
      s=s*10+r;
      t=t/10;
    }
  while(s>0){

    i=s%10;
    switch(i)
      {
      case 0:printf(" ");
	      break;
      case 1:  printf(" one ");
	         break;
      case 2: printf(" two ");
	           break;
      
      case 3: printf(" three ");
	         break;
      case 4: printf(" four");
	break;
      case 5:printf(" five");
	break;
      case 6:printf(" six");
	break;
      case 7:printf(" seven");
	break;
      case 8: printf(" eight");
	break;
      case 9: printf(" nine");
	break;
      default :printf(" ");
	        break;
      }
    s=s/10;
    bata(j);
    j--;
  }
  return 0;
}
void bata(int j){
  switch(j){
  case 1:printf(" ");
           break;
  case 2:printf(" hundread");
              break;
  case 3:printf(" thousand");
            break;
  
  default: printf(" ");
            break;
  }
}
