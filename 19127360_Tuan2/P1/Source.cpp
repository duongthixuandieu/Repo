#include "header.h"
int countBunniesears(int bunnies)
{   if (bunnies ==0)
        return 0 ;
    if (bunnies % 2 == 1)
        return 2 + countBunniesears (bunnies-1);
    return 3 + countBunniesears (bunnies-1); 
}