#include<stdio.h>
int fibonacci(int n)
    
{   
    if (n==1 || n==2)
    {
    return n;
    }
   else{
        return (fibonacci(n-1)+fibonacci(n-2)); 
        }
}

  int main()
{
    int num;
      
    printf("Enter the number you want the fibonacci of: \n");
    scanf("%d", &num);
    printf("The fibonacci of %d is %d\n", num, fibonacci(num));
   return 0;
}

