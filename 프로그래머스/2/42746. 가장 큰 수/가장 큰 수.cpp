#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const string& left, const string& right)
{
    return (left + right) > (right + left);
}

string solution(vector<int> numbers) 
{
    string answer = "";
    vector<string> s;  
    for (auto element : numbers)
    {
        s.push_back(to_string(element));
    }
    sort(s.begin(), s.end(), compare);
    for (auto element : s)
    {
        answer.append(element);
    }
    return (answer[0] == '0') ? "0" : answer;
}