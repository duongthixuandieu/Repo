#include "header.h"

int bagsumproduct(int a[], int n, int W)  
{   
    int b = a[0], max_w = 0, start = 0;  
    for (int i = 1; i < n; i++) 
    {  
        if (b < W)  
           max_w = max(max_w, b);  
        while (b + a[i] >= W && start < i) {  
            b -= a[start];
            start++;  
        } 
        b +=a[i];  
    }  
    if (b <= W)  
        max_w = max(max_w, b);  
    return max_w;  
} 