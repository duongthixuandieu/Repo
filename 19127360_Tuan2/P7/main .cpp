#include "header.h"

int main()
{
    int n;
    int sum[1000];
    int start;
    int target;

    ofstream fout;
    ifstream fin;
    fin.open("input.txt");
    fout.open("output.txt");

    if (!fin.is_open())
        fout<<"Open is fail"<<endl;
    else 
    {
        fin>>n;
        for (int i=0; i<n; i++)
            fin>>sum[i];
        if (splitArray(sum,n))
            fout<<"Yes";
        else fout<<"No";
    }

    fin.close();
    fout.close();
}