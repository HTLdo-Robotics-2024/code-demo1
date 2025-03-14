#include <kipr/wombat.h>
#include "mycanum.hpp"

int main()
{
    printf("Here goes nothing :)");
    
    left(3000);
    forward(6000);
    
    
    for(int i=0; i<500; i++) {
        turn_left(1);
        forward(1);
    }
    
    
    
    return 0;
}
