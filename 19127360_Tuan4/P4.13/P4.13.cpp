#include <iostream>
using namespace std;
void countcharacter(char s[], int n)
{
    int *a;
    a = new int[122];
    for (int i=0; i<n; i++)
    {
        for(int j=97; j<=122; j++)
        {
            if ((int)s[i] == j || (int)s[i] == j - 32)
                *(a+j)= *(a+j) + 1;
        }
    }
    for (int i=97; i<=122; i++)
    {
        cout<<(char)i<<": [";
        for (int j=0; j<a[i]; j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}
int main()
{
    char s[] = "KkasjdkajsdSDDD";
    int n = sizeof(s)/sizeof(s[0]);
    countcharacter(s,n);
    return 0;
}