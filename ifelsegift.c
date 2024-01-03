#include <stdio.h>

int main()
{
  char math,science,pass;
  
  // printf("\nEnter subject name which you have been passed: ");
   // scanf("\n%c", &subject);
   
   printf("Result of math=");
    scanf("\n%c", &math);
     
     printf("Result of science=");
     scanf("\n%c", &science);
   //scanf("%c", &pass);
   
  // printf("\nyou have entered %c to see your gift!");
    
  // if(math=pass,science=pass)
//{   printf("\nyou have got 45 Rupya as your gift!");}
 
     if (math==pass)
{   printf("\nyou have got 20 Rupya as your gift!");

}
  else if (science==pass)
{  printf("\nyou have got 15 Rupya as your gift!");

}    
   else {
        printf ("\nyou have not got any gift!");
 }   
   return 0;

}
