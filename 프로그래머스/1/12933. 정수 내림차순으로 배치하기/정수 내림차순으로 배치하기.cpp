#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    vector<int> down;   // vector 배열 선언
    vector<int> conversion;
    
    for(int i = 0; n != 0; i++)    // 정수의 각 자리 숫자를
    {                                   // 벡터의 원소로 입력하는 법
        down.push_back(n % 10);
        n /= 10;
    }
    
    for(int k = 0; k <= 9; k++)     // 0 ~ 9까지 반복해서 수행
    {
        for(int j = 0; j < down.size(); j++)
        {
            if(down[j] == k)
            {
                conversion.push_back(k);
            }
        }
    }

    for(int x = 0; x < conversion.size(); x++)
    {
        answer += conversion[x] * pow(10, x);
    }
    
    return answer;
}