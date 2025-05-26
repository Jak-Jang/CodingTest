#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;

    for(int i = 1; i <= n; i++) //1부터 n까지 반복
    {
        if(n % i == 0)          //나머지가 0일 경우
        {
            answer += i;        //answer 값에 i 값을 더해줌
        }
    }
    
    return answer;
}