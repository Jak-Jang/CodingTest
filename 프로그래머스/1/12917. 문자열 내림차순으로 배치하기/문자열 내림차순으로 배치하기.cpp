#include <string>
#include <algorithm> // sort 사용

using namespace std;

string solution(string s) 
{
    sort(s.begin(), s.end(), greater<int>());
    // 내림 차순 greater<int>()
    // 문자 형변환 A의 아스키 코드 65~ , a의 아스키 코드 97
    return s;
}