#include <stdio.h>


int main() {
   int a ,b;
   b=0;
   printf ("Given the Number for Multiplication:\n");
   scanf ("%d", &a);
   
   printf ("The multiplication table of %d is\n",a);
 // for (int i =0; i < 10; i++)
   // { 
     //  printf("%d x %d = %d\n",a, i+1, (i+1)*a);}
   //
   
   for (int i=1; i<= 10; i++)
{
   b=b+a;
   printf ("%d x %d =%d\n",a, i, b); }

      return 0;

}