#include <iostream>
using namespace std;
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
    cout<<*xp<<endl<<*yp<<endl;
} 
void swap2(int &x, int &y) 
{ 
    int temp = x; 
    x = y; 
    y = temp; 
} 
int main()
{
    int a;
    int b;
    int *pa = &a;
    int *pb = &b;
    cout<<"Enter two variables: ";
    cin>>a>>b;
    int **ptr_pa;
    ptr_pa = &pa;
    int **ptr_pb;
    ptr_pb = &pb;
    swap(ptr_pa, ptr_pb);
    cout<<a<<endl<<b;
    return 0;
}