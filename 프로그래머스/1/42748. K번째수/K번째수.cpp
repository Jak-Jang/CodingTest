#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;
    int a, b, c;
    vector<int> temp;
    
    for(int i = 0; i < commands.size(); i++)
    {
        a = commands[i][0] - 1;
        b = commands[i][1] - 1;
        c = commands[i][2] - 1;
        temp.clear();
        for(int j = a; j <= b; j++)
        {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[c]);
    }
    return answer;
}