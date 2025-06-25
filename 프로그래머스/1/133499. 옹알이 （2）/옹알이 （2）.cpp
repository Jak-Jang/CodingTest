#include <string>
#include <vector>
#include <regex> // 정규표현식?
// #include <stack> // 스택으로 비교하기?
// 조합 가능한 모든 경우의 수 만들기?
using namespace std;

int solution(vector<string> babbling) 
{
    int answer = 0;
    regex r("aya|ye|woo|ma");
    string s;
    for (int i = 0; i < babbling.size(); i++)
    {
        s = babbling[i];
        if(s.find("ayaaya") != string::npos) { continue; }
        if(s.find("yeye") != string::npos) { continue; }
        if(s.find("woowoo") != string::npos) { continue; }
        if(s.find("mama") != string::npos) { continue; }
        s = regex_replace(s, r, "");   
        if(s == "") { answer++; }
    }
    
    return answer;
}