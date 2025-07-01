#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) 
{
    vector<int> answer;
    map<char, int> m;
    int temp;
    
    for(char i = 'A'; i <= 'Z'; i++)
    {
        for(string it : keymap)
        {
            if(find(it.begin(), it.end(), i) != it.end())
            {
                if(m.find(i) == m.end())
                {
                    m[i] = find(it.begin(), it.end(), i) - it.begin() + 1;
                }
                else
                {
                    if(m[i] > find(it.begin(), it.end(), i) - it.begin() + 1)
                    {
                        m[i] = find(it.begin(), it.end(), i) - it.begin() + 1;
                    }
                }
            }   
        }
    }
    
    for(string it : targets)
    {
        temp = 0;
        for(int i = 0; i < it.length(); i++)
        {
            if(m.find(it[i]) != m.end())
            {
                temp += m[it[i]];
            }
            else
            {
                temp = -1;
                break;
            }
        }
        answer.push_back(temp);
    }
    
    return answer;
}