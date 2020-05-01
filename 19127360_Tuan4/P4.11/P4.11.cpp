#include<iostream> 
using namespace std;
bool ascending(int a, int b)
{
    return a<b;
}
bool descending(int a, int b)
{
    return a>b;
}
void selectsort(int a[], int n, bool(*comparisonUserWant)(int, int))
{
    int find_i;
    for (int i = 0; i<n-1; i++)
    {
        find_i = i;
        for (int j=i; j<n; j++)
        {
            if (comparisonUserWant(a[find_i],a[j]))
            find_i = j;
        }
        swap(a[find_i],a[i]);
    }
}
void printArray(int a[], int n)
{
    cout<<"The result for your choice: ";
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[] = {1, 10, 200, 3, 100, 2, 88, 1, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int x;
    cout<<"We have 2 choices for you: "<<endl;
    cout<<"First choice: An ascending array"<<endl;
    cout<<"Second choice: A descending array"<<endl;
    cout<<"Enter your choice: 1 or 2 ";
    cin>>x; 
    if (x==1)
    {
        selectsort(a,n,ascending);
        printArray(a,n);
    }
    if (x==2)
    {
        selectsort(a,n,descending);
        printArray(a,n);
    }
    return 0;
}