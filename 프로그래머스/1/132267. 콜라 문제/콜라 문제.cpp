using namespace std;

int solution(int a, int b, int n) 
{
    int answer = 0;
    int check = 0;
    
    while(n >= a)
    {
        check = n / a;
        n = n - check * a + check * b;
        answer += check * b;
    }
    
    return answer;
}