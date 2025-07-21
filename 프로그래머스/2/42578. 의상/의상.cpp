#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
    unordered_map<string, int> cases;
    int n = 1;
    for(const auto& it : clothes){ cases[it[1]]++; }
    for(const auto& it : cases){ n *= it.second + 1; }
    return n - 1;
}