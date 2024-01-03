#include <stdio.h>

int main()

{
   int age;
   printf("\nEnter your age: ");
   
   scanf("%d", &age);
   printf("\nyou have entered \'%d\' as your age\n", age);

   if (age>=18) {
      printf("you can vote!");
     
}
   else if (age>=10) {
     printf("\nyou are between 10 to 18 and you can vote for kids");
 }

  else {
        printf("\nyou cannot vote");
}
    return 0;

}