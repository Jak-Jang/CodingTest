#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    int count1 = 0;
    int count2 = 0;
    char temp = s[0];
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == temp)
        {
            count1++;
        }
        else
        {
            count2++;
            if(count1 == count2)
            {
                answer++;
                if(i + 1 != s.length())
                    temp = s[i+1];
            }
        }
    }
    if(count1 != count2)
        answer++;
    return answer;
}