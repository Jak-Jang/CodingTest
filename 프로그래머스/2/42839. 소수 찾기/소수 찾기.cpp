#include <string>
#include <unordered_set>

using namespace std;

string nums;
bool visited[7];
unordered_set<int> s;

// 소수 판별 함수
bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void findCombinations(string currentNum)
{
    if (!currentNum.empty())
    {
        s.insert(stoi(currentNum));
    }
    
    for (int i = 0; i < nums.length(); i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            findCombinations(currentNum + nums[i]);
            visited[i] = false;
        }
    }
}

int solution(string numbers)
{
    int answer = 0;
    nums = numbers;
    
    findCombinations("");
    for (int it : s)
    {
        if (isPrime(it)) answer++;
    }
    
    return answer;
}