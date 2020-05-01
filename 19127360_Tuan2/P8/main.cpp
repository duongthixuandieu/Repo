#include "header.h"
int main()
{
        ifstream fin;
        ofstream fout;
        fin.open("input.txt");
        fout.open("output.txt");
        int money;
        int price;
        int wrap;
        int chocolate;
        if (!fin.is_open())
            fout<<"Open is fail"<<endl;
        else 
        {
            fin>>money;
            fin>>price;
            fin>>wrap;
            chocolate = money/price;
            fout<<returnChocolate(chocolate,wrap) + chocolate;
        }
        fin.close();
        fout.close();
}