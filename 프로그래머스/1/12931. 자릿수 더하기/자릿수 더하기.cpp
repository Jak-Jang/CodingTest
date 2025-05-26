#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(n /10 != 0)       //소수점을 버리는 점을 이용, 탈출 조건
    {
        answer += n % 10;   //10으로 나눈 나머지를 answer에 계속 더해줌
        n /= 10;            //소수점을 버리는 점을 이용, 10을 계속 나눠줌
    }
    
    return answer + n;
}