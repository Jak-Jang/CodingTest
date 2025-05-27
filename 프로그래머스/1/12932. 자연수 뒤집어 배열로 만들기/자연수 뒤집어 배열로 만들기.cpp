#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) 
{
    vector<int> answer;
    
    while(10 * n / 10 != 0) // 마지막 한번 더 실행 시키기
    {
        answer.push_back(n % 10);
        n /= 10;
    }
    
    return answer;
}