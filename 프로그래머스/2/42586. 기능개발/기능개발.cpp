#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    vector<int> answer;
    int idx = 0;
    
    while(idx < progresses.size())
    {
        int count = 0;
        for(int i = idx; i < progresses.size(); i++)
        {
            if(progresses[i] < 100) break;
            count++;
        }
        idx += count;
        if(count) answer.push_back(count);
        for(int i = 0; i < progresses.size(); i++)
            progresses[i] += speeds[i];
    }
    
    return answer;
}