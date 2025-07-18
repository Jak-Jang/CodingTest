#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;
    unordered_map<string, int> Buy;
    for(int i = 0; i < want.size(); i++) { Buy[want[i]] = number[i]; }
    
    for(int i = 0; i < discount.size() - 9; i++)
    {
        unordered_map<string, int> Sell;
        bool b = true;
        for(int j = 0; j < 10; j++)
        {
            Sell[discount[i + j]]++;
        }
        for(auto it : Buy)
        {
            if(Sell[it.first] != it.second)
                b = false;
        }
        if(b) answer++;
    }
    
    return answer;
}