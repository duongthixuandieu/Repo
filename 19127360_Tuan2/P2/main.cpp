#include "header.h"
int main()
{
    char str[255];
    int n;
    ifstream fin;
    ofstream fout;

    fin.open("input.txt");
    fout.open("output.txt");
    
    if (!fin.is_open())
    {
        fout<<"Open file is fail\n";
    }
    else 
    {   fin>>str;
        char *s=str;
        fout<<countHi2(s,0,strlen(s)-1);
    }
    fin.close();
    fout.close();
}