#include <vector>
#include <iostream>
using namespace std;

bool prime(int n)
{
    if(n == 1)
        return false;
    
    for(int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int solution(vector<int> nums) 
{
    int answer = 0;
    
    for(int i = 0; i < nums.size() - 2; i++)
    {
        for(int j = i + 1; j < nums.size() - 1; j++)
        {
            for(int k = j + 1; k < nums.size(); k++)
            {
                if(prime((nums[i] + nums[j] + nums[k])))
                {
                    answer++;
                }
            }
        }
    }
 
    return answer;
}