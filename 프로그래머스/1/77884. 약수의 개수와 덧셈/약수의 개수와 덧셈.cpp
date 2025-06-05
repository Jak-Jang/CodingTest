using namespace std;

int solution(int left, int right) 
{
    int answer = 0; // 약수의 개수가 홀수 = 제곱 수
    int temp = 0; // 약수의 개수

    for (int i = left; i <= right; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				temp += 1;
			}
		}
        temp % 2 == 0 ? answer += i : answer -= i; // 홀짝 삼항연산자
		temp = 0;
	}
    
    return answer;
}