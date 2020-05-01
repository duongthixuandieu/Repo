#include <iostream>
using namespace std;
int main()
{
    int *a;
    a = new int[100];
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>*(a+i);
    }
    int Max = (a[0]);
    for (int i=0; i<n; i++)
    {
        if (*(a+i) > Max) 
            Max = (*(a+i));
    }
    cout<<Max;
    return 0;
}