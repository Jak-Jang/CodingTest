#include <vector> // stack?
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int dream = 0;
    int reality = 0;
    vector<int> answer;
    
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    for(int i = 0; i < lottos.size(); i++)
    {
        if(lottos[i] == 0)
        {
            dream++;
            continue;
        }
        for(int j = 0; j < win_nums.size(); j++)
        {
            if(lottos[i] == win_nums[j])
            {
                reality++;
                dream++;
            }
        }
    }
    
    if(dream > 1)
    {
        answer.push_back(7 - dream);
    }
    else
    {
        answer.push_back(6);
    }
    
    if(reality > 1)
    {
        answer.push_back(7 - reality);
    }
    else
    {
        answer.push_back(6);
    }

    return answer;
}