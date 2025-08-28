#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> v3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> answer;
    vector<int> count(3, 0);
    int maxScore = 0;
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == v1[i % v1.size()])
        {
            count[0]++;
        }
        if(answers[i] == v2[i % v2.size()])
        {
            count[1]++;
        }
        if(answers[i] == v3[i % v3.size()])
        {
            count[2]++;
        }
    }
    
    for (int score : count)
    {
        if (maxScore < score)
        {
            maxScore = score;
        }
    }
    
    for(int i = 0; i < count.size(); i++)
    {
        if(count[i] == maxScore)
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}