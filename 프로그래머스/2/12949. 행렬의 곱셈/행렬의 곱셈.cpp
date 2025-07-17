#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    vector<vector<int>> answer;
    vector<int> temp;
    int sum = 0;

    for(int x = 0; x < arr1.size(); x++)
    {
        for(int y = 0; y < arr2[0].size(); y++)
        {
            for(int i = 0; i < arr1[0].size(); i++)
            {
                sum += arr1[x][i] * arr2[i][y];
            }
            temp.push_back(sum);
            sum = 0;
        }
        answer.push_back(temp);
        temp.clear();
    }
    
    return answer;
}

// 행렬의 곱셈 a[x][i] * b[i][y] = answer[x][y]
// -10이상 20이하 자연수 = 1 ~ 20