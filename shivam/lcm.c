
#include <stdio.h>
int  hcf(int ,int);
int main(){int a,b,ans;

  printf("enter the number a and b");
  scanf("%d%d",&a,&b);
  ans =  hcf(a,b);
  printf("hcf=%d",ans);
  return 0 ;
}

int  hcf(int a,int b)
{
  if(b==0)
    return a;
 return  hcf(b,a%b);
 

}
