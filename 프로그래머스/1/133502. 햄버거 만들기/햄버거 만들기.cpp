#include <vector>

using namespace std;

int solution(vector<int> ingredient) 
{
    int answer = 0;
    vector<int> s;
    for(int it : ingredient)
    {
        s.push_back(it);
        if(s.size() >= 4)
        {
            if(s[s.size()-4] == 1)
            {
                if(s[s.size()-3] == 2)
                {
                   if(s[s.size()-2] == 3)
                   {
                       if(s[s.size()-1] == 1)
                       {
                           s.pop_back();
                           s.pop_back();
                           s.pop_back();
                           s.pop_back();
                           answer++;
                       }
                   }
                }
            }
        }
    }
    return answer;
}