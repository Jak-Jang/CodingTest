using namespace std;

int solution(int a, int b, int n) 
{
    int answer = 0, Return;
    while(n >= a) {
        Return = n / a;
        n = n - Return * a + Return * b;
        answer += Return * b;
    }
    return answer;
}