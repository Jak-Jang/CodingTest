#include <string>
#include <vector>
#include <algorithm> // count()
#include <cmath> // pow()
// regex?
// erase(remove())?
// 비트연산?

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer = {0, 0};
    int dec;
    
    while(s != "1")
    {
        answer[0]++;
        answer[1] += count(s.begin(), s.end(), '0');
        dec = count(s.begin(), s.end(), '1');
        s = "";
        while(dec != 0)
        {
            (dec % 2 == 1) ? s += "1" : s += "0";
            dec /= 2;
        }    
    }   
        
    return answer;
}