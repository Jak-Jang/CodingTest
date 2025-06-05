#include <string>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int num = s.length(); // s의 문자열 길이
    
    if (num % 2 == 1)
    {
        answer.push_back(s[(num-1)/2]); // push_back을 이용한 문자 삽입
    }
    else
    {
        answer.push_back(s[num/2 -1]);
        answer.push_back(s[num/2]);
    }
    return answer;
}