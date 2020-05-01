#include "header.h"
int main()
{
    int n;
    ifstream fin;
    ofstream fout;

    fin.open("input.txt");
    fout.open("output.txt");

    if (!fin.is_open())
        fout<<"Open is fail\n";
    else 
    {
        fin>>n;
        fout<<triangle(n)<<endl;
    }
    fin.close();
    fout.close();
}

