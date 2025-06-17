#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    int temp;
    answer.push_back(-1);
    for(int i = 1; i < s.length(); i++)
    {
        temp = -1;
        for(int j = 0; j < i; j++)
        {
            if(s[j] == s[i])
            {
                temp = i - j;
            }
        }
        answer.push_back(temp);
    }
    
    return answer;
}