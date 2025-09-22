#include <vector>

using namespace std;

bool check(int x, int y, int n, const vector<vector<int>>& arr)
{
    int temp = arr[x][y];
    for (int i = x; i < x + n; i++)
    {
        for (int j = y; j < y + n; j++)
        {
            if (temp != arr[i][j]) return false;
        }
    }
    return true;
}

void dfs(int x, int y, int n, const vector<vector<int>>& arr, vector<int>& answer)
{
    if (check(x, y, n, arr))
    {
        answer[arr[x][y]]++;
    }
    else
    {
        int half = n / 2;
        dfs(x, y, half, arr, answer);
        dfs(x + half, y, half, arr, answer);
        dfs(x, y + half, half, arr, answer);
        dfs(x + half, y + half, half, arr, answer);
    }
}

vector<int> solution(vector<vector<int>> arr) 
{
    vector<int> answer(2, 0);
    int n = arr.size();
    
    dfs(0, 0, n, arr, answer);

    return answer;
}