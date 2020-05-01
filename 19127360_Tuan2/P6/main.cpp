#include "header.h"
int main()
{
    ofstream fout;
    ifstream fin;
    int n;
    int sum[1000];
    int start;
    int target;
    fin.open("input.txt");
    fout.open("output.txt");
    if (!fin.is_open())
        fout<<"Open is fail"<<endl;
    else 
    {
        fin>>n;
        for (int i=0; i<n; i++)
            fin>>sum[i];
        fin>>start;
        fin>>target;
        if (groupSum(start,sum,target,n))
            fout<<"Yes";
        else fout<<"No";
    }
    fin.close();
    fout.close();
}