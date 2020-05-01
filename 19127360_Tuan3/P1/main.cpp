#include "header.h"
int main() 
{ 
    int a[1000];
    int n;
    cout << "Nhap so phan tu cua day ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    Daycondainhat(a,n,b); 
    return 0; 
} 