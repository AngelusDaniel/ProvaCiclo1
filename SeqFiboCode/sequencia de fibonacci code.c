#include <stdio.h>



int a=1, b=1, c;
int main()
{
    
    printf( " 1");
    printf( " 1");
    
    while (a <= b) {
        
        c = a + b;
        
        printf(" %i", c);
        a=b;
        b=c;
  
    }
    
        
       
    
    
    return 0;
}
