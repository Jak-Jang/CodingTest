using namespace std;

int solution(int num) 
{
    int answer = 0;
    long long n = num;
    
    if(n != 1)
    {
        for(int i = 1; i <= 500; i++)
        {
            n = (n % 2 == 0) ? n / 2 : n * 3 + 1;
            if(n == 1)
            {
                answer = i;
                break;
            }
        }
        if(n != 1)
        {
            answer = -1;
        }
    }
 
    return answer;
}