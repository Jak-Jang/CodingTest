#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) 
{
    vector<long long> answer;
    
    for(int i = 1; i <= n; i++)
    {
        answer.push_back(x*i); //i 번째 자리에 새로운 요소 삽입
    }
    
    return answer;
}