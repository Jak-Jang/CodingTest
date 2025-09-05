#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) 
{
    int answer = 0;
    int n = 1;
    stack<int> s;
    
    while(n <= order.size())
    {        
        if (order[answer] == n)
        {
            answer++;
            n++;
        }
        else
        {
            s.push(n);
            n++;
        }
        
        while (!s.empty() && order[answer] == s.top())
        {
            s.pop();
            answer++;
        }
    }
    
    return answer;
}