#include "header.h"
int main()  
{  
    int a[1000]; 
    int n;
    int W;
    cout<<"Nhap khoi luong cua ba lo";
    cin>>W;
    cout<<"Nhap so luong mon hang ";
    cin>>n;
    cout<<"Nhap khoi luong cac mon hang ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << bagsumproduct(a,n,W); 
    return 0;  
}  
