#include "header.h"
int main()
{
    ofstream fout;
    ifstream fin;
    fin.open("input.txt");
    fout.open("output.txt");
    if (!fin.is_open())
        fout<<"Open is fail"<<endl;
    else 
    {
        string str;
        string s;
        fin>>str;
        fin>>s;
        fout<<strDist(str,s);
    }
    fin.close();
    fout.close();
}
