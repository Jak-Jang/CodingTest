#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) 
{
    string answer = ""; // a 97 / z 122
    
    for (int i = 0; i < s.length(); i++)
    {
        int temp = index;
        while(temp != 0)
        {
            s[i]++;
            if(s[i] > 'z')
                s[i] -= 26;
            if(find(skip.begin(), skip.end(), s[i]) != skip.end())
                temp++;
            temp--;
        }
        answer += s[i];
    }
    
    return answer;
}