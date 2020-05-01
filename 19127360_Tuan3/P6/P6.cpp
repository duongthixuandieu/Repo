#include<iostream> 
#include<cstring>
using namespace std; 
void daycontrungnhau( char *A, char *B, int m, int n ) 
{ 
   int L[m+1][n+1]; 
   for (int i=0; i<m; i++) 
   { 
     for (int j=0; j<n; j++) 
     { 
       if (i == 0 || j == 0) 
         L[i][j] = 0; 
       else if (A[i-1] == B[j-1]) 
         L[i][j] = L[i-1][j-1] + 1; 
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]); 
     }
   } 
   int l = L[m][n]; 
   char a[l+1]; 
   a[l] = '\0';
   int i = m, j = n; 
   while (i >=0 && j >=0) 
   {
      if (A[i-1] == B[j-1]) 
      { 
          a[l-1] = A[i-1]; 
          i--; j--; l--;   
      } 
      else if (L[i-1][j] > L[i][j-1]) 
         i--; 
      else
         j--; 
   } 
   cout << "Day con trung nhau cua " << A << " va " << B << " la " << a; 
} 
int main() 
{ 
  char A[1000];
  char B[1000];
  int m;
  int n;
  cout << "Nhap so phan tu mang A ";
  cin >> n;
  cout << "Nhap so phan tu mang B ";
  cin >> m;
  cout << "Nhap phan tu mang A ";
  for (int i = 0; i < n; i++)
  {
      cin >> A[i];
  }
  cout<<"Nhap phan tu mang B ";
  for (int i = 0; i < m; i++)
  {
      cin >> B[i];
  }
  daycontrungnhau(A, B, m, n); 
  return 0; 
}