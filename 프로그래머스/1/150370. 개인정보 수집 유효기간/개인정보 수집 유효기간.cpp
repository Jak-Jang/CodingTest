#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int Casting(string value)
{
    string year = value.substr(2,2); // 2000 <= year <= 2022
    string month = value.substr(5,2); // 1 <= month <= 12
    string day = value.substr(8,2); // 1 <= day <= 28
    
    int num = 0;
    num += stoi(year) * 12 * 28;
    num += stoi(month) * 28;
    num += stoi(day);
    
    return num;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) 
{
    vector<int> answer;
    unordered_map<char, int> Terms;
    int Today = Casting(today);
    
    for(string it : terms) { Terms[it[0]] = stoi(it.substr(2)); }
    for(int i = 0; i < privacies.size(); i++)
    {
        int compare = Casting(privacies[i].substr(0, 10)) + Terms[privacies[i][11]] * 28;
        if(compare <= Today) answer.push_back(i + 1);
    }
    
    return answer;
}