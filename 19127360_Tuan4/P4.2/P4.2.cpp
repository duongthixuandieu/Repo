#include <iostream>
using namespace std;
int main()
{
    double *p = new double[10];
    cout<<"Enter elements: ";
    for (int i = 0; i<10; i++)
    {
        cin>> *(p+i);
    }
    cout<<"Results: ";
    for (int i = 0; i<10; i++)
    {
        *(p+i) = 1.0;
        cout<< *(p+i);
    }
    return 0;
     
}