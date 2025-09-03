#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    int n = numbers.size();
    // 미리 모든 원소를 -1로 초기화
    vector<int> answer(n, -1);
    // 뒷 큰 수를 찾지 못한 원소의 인덱스 저장
    stack<int> s;
    
    for (int i = 0; i < n; i++)
    {
        // 스택에 저장된 인덱스의 원소와 현재 원소와 비교
        while (!s.empty() && numbers[s.top()] < numbers[i])
        {
            answer[s.top()] = numbers[i];
            s.pop();
        }
        s.push(i);
    }
    
    return answer;
}