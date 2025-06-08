#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) 
{
    vector<int> answer;
    int temp;
    if(n < m)
    {
        temp = n;
        n = m;
        m = temp;
    }
    for(int i = m; i > 1; i--)
    {
        if(n % i == 0 && m % i == 0)
        {
            answer.push_back(i);
            break;
        }
    }
    if(answer.size() == 0)
    {
        answer.push_back(1);
    }    
    answer.push_back(m*n/answer[0]);

    return answer;
}