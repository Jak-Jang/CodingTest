#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    int a, b;
    vector<int> temp;
    vector<vector<int>> answer;
    for(int i = 0; i < arr1.size(); i++)
    {
        temp.clear();
        for(int j = 0; j < arr1[i].size(); j++)
        {
            a = arr1[i][j];
            b = arr2[i][j];
            temp.push_back(a+b);
        }
        answer.push_back(temp);
    }
        
    return answer;
}