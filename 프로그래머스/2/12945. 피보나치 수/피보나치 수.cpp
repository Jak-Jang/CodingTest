using namespace std;

int solution(int n) 
{
    int answer = 0;
    int temp0 = 0, temp1 = 1;
    
    while(n - 1 != 0)
    {
        answer = (temp0 + temp1) % 1234567;
        temp0 = temp1;
        temp1 = answer;
        n--;
    }
    
    return answer;
}