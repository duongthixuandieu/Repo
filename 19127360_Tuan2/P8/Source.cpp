#include "header.h"
int returnChocolate(int chocolate, int wrap)
{
    if (chocolate<wrap) return 0;
    return (chocolate/wrap) + returnChocolate(chocolate/wrap + chocolate%wrap,wrap);
}