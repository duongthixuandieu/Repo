#include <iostream>
using namespace std;
char *ex8 (char pc)
{
   char * p_pc =&pc;
   return p_pc;
}
float *ex9(int pi)
{
    float t = float(pi);
    float *p_pi = &t;
    return p_pi;
}
bool ex10(int pi)
{
    int * p_pi = &pi;
    if (*p_pi % 2 == 0)
        return true;
    else return false;
}
int main()
{
    char *ex1;

    char **ex2;

    char *ex3[10];

    char a[30], *ex4;
    ex4 = &a[30];

    char array[500];
    char *pointer = &array[500];
    char ex5 = pointer[10];

    int value = 10;
    const int *ex6 = &value;

    int *const ex7 =  &value;
}

    