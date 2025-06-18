#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) 
{
    string answer = "";
    for(int i = 1; i < food.size(); i++)
    {
        food[i] /= 2;
    }
    for(int i = 1; i < food.size(); i++)
    {
        if(food[i] != 0)
        {
            for(int j = 0; j < food[i]; j++)
            {
                answer.append(to_string(i));
            }
        }
    }
    answer.append(to_string(0));
    for(int i = food.size() - 1; i > 0; i--)
    {
        if(food[i] != 0)
        {
            for(int j = 0; j < food[i]; j++)
            {
                answer.append(to_string(i));
            }
        }
    }
    
    return answer;
}