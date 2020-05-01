#include <iostream>
#include <string>
using namespace std;
char find_nonwhite(char *mystring, int n) 
{
    int i=0;
	while (i<n)
    {
        if (mystring[i] != ' ' || mystring[i] != '\t')
           break;
        else i++;
    } 
	return *(mystring + i);
}

int main() 
{
	char line[100];            
	cout<<"Enter your string ";
    cin>>line;
	cout<<find_nonwhite(line, strlen(line));
	return 0 ;
}