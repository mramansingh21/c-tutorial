#include<stdio.h>

int main()
{
   int a=8;
   int  b=5; 
   int *ptrb= &b;
   int *ptr2= NULL;
       
       printf("The address value of %d\n",&b); //this show the address of 'b'
       printf("The value of %d\n", *&b); // This give the value of "b"
       printf("The address of some garbage is %p\n", ptr2); //This show the null address


    return 0;
}