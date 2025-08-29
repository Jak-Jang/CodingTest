#include <vector>

using namespace std;

int solution(vector<int> numbers, int target)
{
    int answer = 0;
    int n = numbers.size();
    
    // 부분 집합의 경우의 수 = n^2
    for(int i = 0; i < 1 << n; i++) 
    {
        int sum = 0;
        
        for (int j = 0; j < n; j++)
        {
            // 비트 마스크
            if ((i >> j) & 1)
            {
                sum -= numbers[j];
            }
            else
            {
                sum += numbers[j];
            }
        }
        
        if (sum == target) answer++;
    }
    
    return answer;
}