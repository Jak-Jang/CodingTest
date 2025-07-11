using namespace std;

// 규칙성 n = n-1 + n-2 == 피보나치 수
long long solution(int n) 
{
    long long a = 1, b = 2;
    if (n == 1) return a;
    if (n == 2) return b;
    long long temp = 0;
    while(n - 2)
    {
        temp = a + b;
        temp %= 1234567;
        a = b;
        b = temp;
        n--;
    }
    return temp;
}