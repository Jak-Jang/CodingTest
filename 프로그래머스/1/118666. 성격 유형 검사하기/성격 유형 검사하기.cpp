#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string solution(vector<string> survey, vector<int> choices) 
{
    string answer = "";
    unordered_map<char, int> m;
    string s = "RTCFJMAN";
    for(char it : s) { m[it] = 0; }
    for(string it : survey) { sort(it.begin(), it.end()); }
    for(int i = 0; i < survey.size(); i++)
    {
        if(choices[i] < 4) // R C J A / 1 2 3
        {
            m[survey[i][0]] += 4 - choices[i];
        }
        else if(choices[i] > 4) // T F M N / 7 6 5
        {
            m[survey[i][1]] += choices[i] - 4;
        }
    }
    m['R'] < m['T'] ? answer.append("T") : answer.append("R");
    m['C'] < m['F'] ? answer.append("F") : answer.append("C");
    m['J'] < m['M'] ? answer.append("M") : answer.append("J");
    m['A'] < m['N'] ? answer.append("N") : answer.append("A");
    
    return answer;
}