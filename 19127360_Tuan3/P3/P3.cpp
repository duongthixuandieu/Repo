#include <iostream> 
#include <algorithm>
using namespace std;
void Bagsumproduct(int W, int wt[], int val[], int n) 
{ 
    int i, w; 
    int a[n + 1][W + 1]; 
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) 
                a[i][w] = 0; 
            else if (wt[i - 1] <= w) 
                a[i][w] = max(val[i - 1] +  
                    a[i - 1][w - wt[i - 1]], a[i - 1][w]); 
            else
                a[i][w] = a[i - 1][w]; 
        } 
    }    
    cout << "Gia tri lon nhat cua balo la " << a[n][W] << endl; 
      
    w = W; 
    int value = a[n][W];
    cout << "Nhung mon hang duoc chon la ";
    for (i = n; i > 0 && value > 0; i--) { 
        if (value == a[i - 1][w])  
            continue;        
        else 
        { 
           cout<<wt[i - 1]<<" ";
            value = value - val[i - 1]; 
            w = w - wt[i - 1]; 
        } 
    } 
}
int main() 
{ 
    int val[1000];
    int wt[1000];
    int W;
    int n; 
    cout << "Nhap khoi luong cua ba lo ";
    cin >> W;
    cout << "Nhap so luong mon hang ";
    cin >> n;
    cout << "Nhap khoi luong cac mon hang";
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout<<"Nhap gia tri cac mon hang";
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    Bagsumproduct(W, wt, val, n); 
    return 0; 
} 