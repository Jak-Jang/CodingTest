#include <string>
using namespace std;

string solution(string s) 
{
    int check = 1;
    
    for (int i = 0; i < s.length(); i++) // A 65 소문자 97
    {
        if(s[i] == ' ') // 공백을 만나면 홀짝 초기화
        {
            check = 1;
        }
        else
        {
            if (check % 2 != 0)// 홀수
            {
                if (s[i] >= 'a') // 소문자 -> 대문자
                {
                    s[i] -= 32;
                }
            }
            else // 짝수
            {
                if (s[i] < 'a') // 짝수 대문자 -> 소문자
                {
                    s[i] += 32;
                }
            }
            check++;
        }
    }
    
    return s;
}