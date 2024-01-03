#include <stdio.h>

int main()
{  
    int L,B,H,volume; 
    
    printf ("\n Enter the Length:");
    scanf ("%d", &L); 
    
    printf ("\n enter the Breadth");
    scanf ("%d", &B);
    
    printf ("\n Enter the Height");
    scanf ("%d", &H);
    
    volume=L*B*H; 
    printf ("\n volume of cuboid :%d",volume); 
    

    /* code */
    return 0;  
}