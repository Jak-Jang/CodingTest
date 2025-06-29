#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) 
{
    int answer = 0;
    vector<int> check(n + 2, 1);
    for(int it : lost) { check[it]--; }
    for(int it : reserve) { check[it]++; }
    for(int i = 1; i <= n; i++)
    {
        if(check[i] == 0)
        {
            if(check[i - 1] == 2)
            {
                check[i]++;
                check[i - 1]--;
            }
            else if(check[i + 1] == 2)
            {
                check[i]++;
                check[i + 1]--;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(check[i] != 0)
            answer++;
    }
    
    return answer;
}