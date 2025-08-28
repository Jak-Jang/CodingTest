#include <vector>
#include <algorithm>
using namespace std;

vector<int> first = {1, 2, 3, 4, 5};
vector<int> second = {2, 1, 2, 3, 2, 4, 2, 5};
vector<int> third = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) 
{
    vector<int> answer;
    vector<int> count(3);
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == first[i % first.size()])
        {
            count[0]++;
        }
        if(answers[i] == second[i % second.size()])
        {
            count[1]++;
        }
        if(answers[i] == third[i % third.size()])
        {
            count[2]++;
        }
    }
    int score = *max_element(count.begin(), count.end());
    
    for(int i = 0; i < count.size(); i++)
    {
        if(count[i] == score)
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}