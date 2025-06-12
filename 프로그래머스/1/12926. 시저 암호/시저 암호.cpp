#include <string>
using namespace std;

string solution(string s, int n) 
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ') // ' ',space == 32
        {
            continue;
        }
        else if(s[i] <= 'Z') // 대문자 'A' == 65, 'a' == 97
        {
            if(s[i] + n > 'Z')
            {
                s[i] = s[i] + n - 26;
            }
            else // 범위는 명확한게 안전합니다.
            {
                s[i] += n;
            }
        }
        else // 소문자 // 공백도 아니고, 대문자도 아닌 경우
        {
            if(s[i] + n > 'z')
            {
                s[i] = s[i] + n - 26;
            }
            else
            {
                s[i] += n;
            }
        }
    }
    
    return s;
}