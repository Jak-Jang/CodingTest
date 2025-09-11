using namespace std;

int solution(int n) 
{
    int answer = 0;
    
    for (int k = 1; k * (k + 1) / 2 <= n; k++) 
    {
        int temp = n - k * (k - 1) / 2;
        if (temp % k == 0) 
        {
            answer++;
        }
    }
    
    return answer;
}