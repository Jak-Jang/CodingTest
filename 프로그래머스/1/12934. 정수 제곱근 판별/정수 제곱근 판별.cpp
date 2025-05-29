#include <vector>
#include <cmath> // pow(a, b), sqrt()

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    long long q= 0;
    
    for(int i = 0; pow(10, 2 * i) <= n; i++)
    {
        long long q = pow(10, i);
    }
    
    for(; pow(q, 2) <= n; q++)   // 숫자가 커지면 너무 오래 걸림
    {
        if(pow(q, 2) == n)
        {
            answer = pow(q + 1, 2);
            break;
        }
        else
        {
            answer = -1;
        }
    }
        
    return answer;
}