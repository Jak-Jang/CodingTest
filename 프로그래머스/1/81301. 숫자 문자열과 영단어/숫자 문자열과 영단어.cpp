#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    
    vector<string> english = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    vector<int> temp;

    for (int j = 0; j < s.length();)
    {
        if (s[j] < 97)
        {
            temp.push_back(s[j] - 48);
            j++;
        }
        else
        {
            for (int i = 0; i < english.size(); i++)
            {
                if (s.substr(j, english[i].length()) == english[i])
                {
                    temp.push_back(i);
                    j += english[i].length();
                    break;
                }
            }
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        answer += temp[temp.size() - i - 1] * pow(10, i);
    }
    
    return answer;
}