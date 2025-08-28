#include <string>

using namespace std;

int solution(string word) 
{
    string v = string("AEIOU");
    int answer = 0;
    int multiple = 781; // 5^0 + 5^1 + 5^2 + 5^3 + 5^4
    
    for (char c : word) 
    {
        answer += v.find(c) * multiple + 1;
        multiple /= 5;
    }
    
    return answer;
}