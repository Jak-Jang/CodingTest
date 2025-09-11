#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int start = 1;
    int end = 1;
    int sum = 0;
    
    while(1)
    {
        if (sum == n) answer++;
        if (start > n) break;
        if (sum > n)
        {
            sum -= start;
            start++;
            continue;
        }
        sum += end;
        end++;
    }
    
    return answer;
}