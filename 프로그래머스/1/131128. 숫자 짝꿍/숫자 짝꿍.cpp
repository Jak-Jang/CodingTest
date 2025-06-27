#include <string>
#include <algorithm>

using namespace std;

string solution(string X, string Y) 
{
    string answer = "";
    int c1 = 0;
    int c2 = 0;
    int n = 0;
    for(int i = 9; i >= 0; --i)
    {
        c1 = count(X.begin(), X.end(), (char)(i + '0'));
        if(c1 == 0) { continue; }
        c2 = count(Y.begin(), Y.end(), (char)(i + '0'));
        if(c2 == 0) { continue; }
        (c1 > c2) ? n = c2 : n = c1;
        while(n > 0)
        {
            n--;
            answer.append(to_string(i));
        }
    }
    if(answer == "")
        answer = "-1";
    return answer[0] == '0' ? answer = "0" : answer;
}