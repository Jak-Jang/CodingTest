#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(long long n)
{
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int solution(int n, int k) 
{
    int answer = 0;
    string num = "";
    vector<string> numbers;
    
    while (n > 0)
    {
        num += to_string(n % k);
        n /= k;
    }
    reverse(num.begin(), num.end());    
    
    stringstream temp(num);
    string s;
    while (getline(temp, s, '0'))
    {
        if (!s.empty()) numbers.push_back(s);
    }
    
    for (string it : numbers)
    {
        long long t = stoll(it);
        if (isPrime(t)) answer++;
    }
    
    return answer;
}