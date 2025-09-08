#include <string>
#include <cctype>

using namespace std;

string solution(string s) 
{
    bool newStr = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (isblank(s[i]))
        {
            newStr = true;
        }
        else 
        {
            if (newStr) 
            {
                s[i] = toupper(s[i]);
                newStr = false;
                continue;
            }
        }
        
        s[i] = tolower(s[i]);
    }
    
    return s;
}