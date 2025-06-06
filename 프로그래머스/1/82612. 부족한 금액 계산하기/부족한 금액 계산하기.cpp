using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    for (int i = 1; i <= count; i++)
    {
        answer += price*i;  // 총 비용
    }
    if((answer - money) > 0) // 모자란 경우
    {
        answer = answer - money;
    }
    else
    {
        answer = 0;
    }
    return answer;
}