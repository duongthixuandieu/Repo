#include <iostream> 
using namespace std;

int Nhiphan(int v[], int l, int r, int key) 
{ 
    while (r - l > 1) { 
        int m = l + (r - l) / 2; 
        if (v[m] >= key) 
            r = m; 
        else
            l = m; 
    }
    return r; 
} 
  
void Daycondainhat(int a[], int n, int b[]) 
{ 
    int length = 1;
    b[0] = a[0]; 
    for (int i = 1; i <n; i++) { 
        if (a[i] < b[0]) 
            b[0] = a[i]; 
        else if (a[i] > b[length - 1]) 
            b[length++] = a[i]; 
        else
            b[Nhiphan(b, -1, length - 1, a[i])] = a[i]; 
    } 
    cout<<"Do dai cua day "<<length<<endl;
    cout<<"Cac phan tu cua day la ";
    for (int j=0; j<length; j++)
    {
        cout<<b[j]<<" ";
    }
} 
  
int main() 
{ 
    int a[1000];
    int n;
    cout<<"Nhap so phan tu cua day ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int b[n];
    Daycondainhat(a,n,b); 
    return 0; 
} 