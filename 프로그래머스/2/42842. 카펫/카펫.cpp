#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(int brown, int yellow) 
{
    vector<int> answer;
    unordered_map<int, int> divisor;
    
    for(int i = 3; i <= (brown + yellow) / 3; i++)
    {
        if((brown + yellow) % i == 0)
            divisor[i] = (brown + yellow) / i;
    }
    
    for(const auto& pair : divisor)
    {
        int a = pair.first;
        int b = pair.second;
        
        if((a-2)*(b-2) == yellow && a*b == brown + yellow)
        {
            a >= b ? answer = { a, b } : answer = { b, a };
            return answer;
        }
    }
}
    // int a, b;
    // (a - 2) * (b - 2) = yellow;
    // a * b = brown + yellow;
    // a >= b;
    // 노란 격자가 1 이상이려면 최소 3*3