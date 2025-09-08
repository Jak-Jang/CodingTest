#include <string>

using namespace std;

string solution(string number, int k)
{
    string answer = "";
    
    for (char n : number)
    {
        while (!answer.empty() && answer.back() < n && k > 0)
        {
            answer.pop_back();
            k--;
        }
        answer.push_back(n);
    }
    
    while(k > 0)
    {
        answer.pop_back();
        k--;
    }
    
    return answer;
}