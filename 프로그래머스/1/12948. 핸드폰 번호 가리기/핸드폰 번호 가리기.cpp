#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) 
{
    vector<char> numbers;
    
    for(int i = 0; i < phone_number.length(); i++)
    {
        if(i < phone_number.length() - 4)
        {
            numbers.push_back('*');
        }
        else
        {
        numbers.push_back(phone_number[i]);
        }
    }
    string answer(numbers.begin(), numbers.end());
    
    return answer;
}