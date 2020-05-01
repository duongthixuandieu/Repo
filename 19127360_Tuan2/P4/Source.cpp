#include "header.h"
string parenBit(string str)
{
	int length = str.length();
	if(str[0] != '(')
	{
		if(str[length-1] != ')')
			return parenBit(str.substr(1, length -1));
		else return parenBit(str.substr(1));
	}
	if(str[length-1] != ')')
		return parenBit(str.substr(0, length - 1));
	return str;
}