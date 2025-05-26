#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    if (n % 2 == 0)
    {
        answer = n*n/4 + n/2; // (n)^2 + n / k = 2n
    }
    else{
        answer = (n-1)*(n-1)/4 + (n-1)/2;
    }
    return answer;
}