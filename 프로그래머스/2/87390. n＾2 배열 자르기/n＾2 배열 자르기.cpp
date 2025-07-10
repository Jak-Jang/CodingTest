#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) 
{
    vector<int> num;
    
    for (int i = left / n + 1; i <= right / n + 1; i++)
    {
        int c = i;
        while(c)
        {
            num.push_back(i);
            c--;
        }
        for(int j = i + 1; j <= n; j++)
        {
            num.push_back(j);
        }
    }
    int a = left % n;
    int b = n - right % n;
    
    vector<int> answer(num.begin() + a, num.end() - b + 1);
    
    return answer;
}