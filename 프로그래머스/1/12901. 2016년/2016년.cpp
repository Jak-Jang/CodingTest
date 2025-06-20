#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) 
{
    string answer = "";
    vector<int> month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 12월은 필요 없음
    vector<string> day = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    if (a != 1)
    {
        for(int i = 0; i < a - 1; i++)
        {
            b += month[i];
        }
    }
    
    answer = day[(b + 4) % 7]; // b에서 뺄 경우, 1월 6일까지 오류
    
    return answer;
}