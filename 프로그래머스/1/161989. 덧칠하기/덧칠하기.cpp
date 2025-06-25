#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) 
{
    int answer = 1;
    int temp = 0;
    
    for(int i = 1; i < section.size(); i++)
    {
        if(section[i] - section[temp] < m)
        {
            continue;
        }
        else
        {
            temp = i;
            answer++;
        }
    }
    
    return answer;
}