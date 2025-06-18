#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) 
{
    while(goal.size() != 0)
    {
        if(!cards1.empty() && *cards1.begin() == *goal.begin())
        {
            cards1.erase(cards1.begin());
            goal.erase(goal.begin());
        }
        else if(!cards2.empty() && *cards2.begin() == *goal.begin())
        {
            cards2.erase(cards2.begin());
            goal.erase(goal.begin());
        }
        else
        {
            return "No";
        }
    }
    return "Yes";
}