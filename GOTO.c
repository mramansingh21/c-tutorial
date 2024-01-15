#include <stdio.h>

int main()
{
    int a;
   
       for(int i=0; i<6; i++){
          printf("%d\n", i);
         

          for(int j=0; j<6; j++)
         { 
             printf("Enter a number. Enter 0 to exit\n");
              scanf("%d", &a);
                if (a==0){
                   goto end;
               }

}
  }          
      end:

        return 0;
     }