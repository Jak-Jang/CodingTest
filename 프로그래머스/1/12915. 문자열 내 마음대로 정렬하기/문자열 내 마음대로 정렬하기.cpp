#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int num;

bool check(string a, string b)
{
    if (a[num] == b[num])
    {
        return a < b; // 같을 경우, 단어 전체 비교
    }
    return a[num] < b[num];
}

vector<string> solution(vector<string> strings, int n)
{
    num = n;
    sort(strings.begin(), strings.end(), check);
    return strings;
}
