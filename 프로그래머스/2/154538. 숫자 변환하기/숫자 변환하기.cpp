#include <queue>
#include <unordered_set>

using namespace std;

int solution(int x, int y, int n) 
{
    if (x == y) return 0;
    
    queue<pair<int, int>> q;
    unordered_set<int> s;
    
    q.push({x, 0});
    while(!q.empty())
    {
        int temp = q.front().first;
        int count = q.front().second;
        q.pop();
        
        if (temp * 3 == y) return count + 1;
        if (temp * 3 < y && s.find(temp * 3) == s.end())
        {
            s.insert(temp * 3);
            q.push({temp * 3, count + 1});
        }
        
        if (temp * 2 == y) return count + 1;
        if (temp * 2 < y && s.find(temp * 2) == s.end())
        {
            s.insert(temp * 2);
            q.push({temp * 2, count + 1});
        }
        
        if (temp + n == y) return count + 1;
        if (temp + n < y && s.find(temp + n) == s.end())
        {
            s.insert(temp + n);
            q.push({temp + n, count + 1});
        }
    }
    
    return -1;
}