#include <vector>
using namespace std;

int solution(int n) 
{
    int answer = 0;
    int temp;
    vector<int> arr;
    
    while(n != 0)
    {
        temp = n % 3;
        n /= 3;
        arr.push_back(temp); // 반전된 상태로 배열에 들어감
    }
    
    temp = 1;    
    for(int i = 0; i < arr.size(); i++)
    {
        answer += arr[arr.size() - 1 - i] * temp;
        temp *= 3;
    }
    
    return answer;
}