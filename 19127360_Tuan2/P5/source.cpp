#include "header.h"
int strDist(string str, string sub) 
{
    int len1=str.length();
    int len2=sub.length();
    if(len1== 1 && (str==sub))
        return 1;
    else if(len1 < len2 || len1 <= 1)
        return 0;
    else 
    {
        if(str[0] == sub[0] && str[0] == str[len1-len2]
            && (str.substr(len1 - len2, len1) == sub)
            && (str.substr(len1 - len2, len1-1) == sub))
        return str.length();
        else 
        {
            if(str.substr(0, len2) == sub)
                return strDist(str.substr(0, len1-1), sub);
            else if(str.substr(len1 - len2, len1) == sub)
                return strDist(str.substr(1, len1), sub);
            return strDist(str.substr(1, len1-1), sub);
        }
    }
}