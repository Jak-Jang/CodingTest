#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>

using namespace std;

vector<int> solution(
    vector<string> id_list,
    vector<string> report,
    int k) 
{
    vector<int> answer;
    vector<string> ban;
    unordered_map<string, int> save;
    unordered_map<string, int> temp;
    // 중복 신고 제거
    sort(report.begin(), report.end());
    report.erase(
        unique(report.begin(), report.end()),
        report.end());
    
    for(string& it : report)
    {
        stringstream name(it);
        string dummy, id;
        name >> dummy >> id;
        save[id]++;
    }
    for(string& it : id_list)
    {
        if(save[it] >= k)
        {
            ban.push_back(it);
        }
    }
    for(string& it : report)
    {
        stringstream name(it);
        string dummy, id;
        name >> dummy >> id;
        if(find(ban.begin(), ban.end(), id) != ban.end())
            temp[dummy]++;
    }
    for(string& it : id_list)
    {
        answer.push_back(temp[it]);
    }
    
    return answer;
}