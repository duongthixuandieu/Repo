#include "header.h"

bool groupSum(int start, int sum[], int target, int length)
{
    
    if (start == length)
    return false;
    if (target == 0)
    return true;
    if (groupSum(start + 1, sum, target - sum[start], length))
        return true;
    else return (groupSum(start + 1, sum, target, length));
}

bool splitArray(int sum[],int length)
{
    return groupSum(1,sum,sum[0],length);
}