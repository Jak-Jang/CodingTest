#include <string>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

// sstream? substr?
// 23:59 = 1439 min
vector<int> solution(vector<int> fees, vector<string> records) 
{
    vector<int> answer;
    unordered_map<string, int> temp;
    map<string, int> save;
    
    for (string s : records)
    {
        string time = s.substr(0, 5);
        string key = s.substr(6, 4);
        int value = stoi(time.substr(0, 2)) * 60 + stoi(time.substr(3, 2));
        
        if (temp.find(key) == temp.end())
        {
            temp[key] = value;
        }
        else
        {
            save[key] += value - temp[key];
            temp.erase(key);
        }
    }
    
    for (auto it : temp)
    {
        save[it.first] += (1439 - it.second);
    }
    
    for (auto it : save)
    {
        if (it.second - fees[0] <= 0) 
        {
            answer.push_back(fees[1]);
            continue;
        }
        int total = fees[1] + (((it.second - fees[0]) / fees[2])) * fees[3];
        if ((it.second - fees[0]) % fees[2] != 0) total += fees[3];
        answer.push_back(total);
    }
    
    return answer;
}