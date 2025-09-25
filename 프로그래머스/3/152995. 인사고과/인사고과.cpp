#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int>& a, vector<int>& b)
{
    return a[0] != b[0] ? a[0] > b[0] : a[1] < b[1];
}

int solution(vector<vector<int>> scores) 
{
    int answer = 1;
    int max = 0;
    
    vector<int> w = scores[0];
    int wSum = w[0] + w[1];
    
    sort(scores.begin(), scores.end(), compare);
    
    for (vector<int> s : scores)
    {
        if (s[1] < max)
        {
            if (s[0] == w[0] && s[1] == w[1]) return -1;
        }
        else
        {
            max = s[1];
            if (s[0] + s[1] > wSum) answer++;
        }
    }
    
    return answer;
}