#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) 
{
    vector<long long> answer;
    
    for (long long num : numbers)
    {
        if (num & 1)
        {
            long long temp = 1;
            while(true)
            {
                if ((num & temp) == 0)
                {
                    answer.push_back((num + temp) ^ (temp >> 1));
                    break;
                }
                temp <<= 1;
            }
        }
        else answer.push_back(num + 1);
    }
    
    return answer;
}