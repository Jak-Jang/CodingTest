#include <vector>
using namespace std;

bool solution(int x) 
{
    bool answer = true;
    vector<int> vec;
    int a = x;
    int b = 0;
    
    for(int i = 0; a != 0; i++)
    {
        vec.push_back(a % 10);
        a /= 10;       
    }
    
    for(int j = 0; j < vec.size(); j++)
    {
        b += vec[j];
    }
    
    if(x % b != 0)
    {
        answer = false;
    }
    
    return answer;
}