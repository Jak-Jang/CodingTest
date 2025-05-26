#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) 
{
    int answer = 0;
    answer = num1 * 1000 / num2; //정수형이기 때문에 앞에 먼저 곱하기
    return answer;
}