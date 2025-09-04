#include <string>
#include <unordered_set>

using namespace std;

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

void makeNum(const string& numbers, string currentNum)
{
    if (!currentNum.empty())
    {
        s.insert(stoi(currentNum));
    }
    
    for (int i = 0; i < numbers.length(); i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            makeNum(numbers, currentNum + numbers[i]);
            visited[i] = false;
        }
    }
}

int solution(string numbers)
{
    int answer = 0;
    
    makeNum(numbers, "");
    
    for (int it : s)
    {
        if (isPrime(it)) answer++;
    }
    
    return answer;
}