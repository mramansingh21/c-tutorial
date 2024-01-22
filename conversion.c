#include <stdio.h>

int main()
{
    int unit;
       
        printf("Enter value in kg: ");
         scanf("%d", &unit);
          

         printf("%d kg = ", unit);
         printf("%d g", unit*1000);
          

      return 0;
}