#include <vector>

using namespace std;

int GCD(int a, int b) // 최대 공약수
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
int LCM(int a, int b) // 최소 공배수 = 두 수의 곱 / 최대 공약수
{
    return a * b / GCD(a, b);
}

int solution(vector<int> arr)
{
    int answer = 1;
    
    for (const int& it : arr)
        answer = LCM(answer, it);

    return answer;
}