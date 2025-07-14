#include <vector>
#include <algorithm>
#include <functional>
#include <unordered_map>

using namespace std;

int solution(int k, vector<int> tangerine) 
{
    int answer = 0;
    unordered_map<int, int> count;
    vector<pair<int, int>> frequency;
    for(const int& it : tangerine) { count[it]++; }
    for(const auto& it : count)
        { frequency.push_back({it.second, it.first}); }
    
    sort(frequency.begin(), frequency.end(), greater());
    
    for(const auto& it : frequency)
    {
        answer++;
        k -= it.first;
        if(k <= 0) break;
    }
    
    return answer;
}