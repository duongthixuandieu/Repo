#include "header.h"
int countHi2(char *s, int i, int n)
{
    if (n==2) return 0;
    if (i>=n) return 0;
    if (s[i] == 'x') 
        return countHi2(s,i+2,n);
    else 
        if ((s[i] == 'h') && (s[i+1]=='i')) 
            return 1 + countHi2(s,i+2,n);
        else return countHi2(s,i+1,n);
}    
