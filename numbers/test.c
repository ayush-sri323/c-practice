#include<stdio.h>

int main()
{
   float *ptr;
   float g = 5.33;
   ptr = &g;
   printf("%p %f", &g, *ptr);
}




