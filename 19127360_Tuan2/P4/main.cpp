#include "header.h"
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");
    string str;
    if (!fin.is_open())
        fout<<"Open is fail"<<endl;
    else 
    {
        fin>>str;
        fout<<parenBit(str);
    }
    fin.close();
    fout.close();
}