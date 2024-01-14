#include<stdio.h>

int main()
{
    int a,b;
 
      printf("Enter a number:");
       scanf("%d", &a);
      
       for(b=0; b<5; b++){
        if (a>5){
        break;
     } 
       printf("%d\n", b);
         
      } 
  
    return 0;
}