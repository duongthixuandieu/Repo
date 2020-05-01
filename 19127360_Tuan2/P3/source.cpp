#include "header.h"

int triangle(int n)
{
    if (n==0) return 0;
    else return n + triangle(n-1);
}