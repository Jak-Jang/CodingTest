#include <string>
#include <vector>
#include <algorithm> // 내가 이거 풀려고 find 배워왔다...

using namespace std;

string solution(vector<string> seoul) 
{
    string answer = "";
    
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    
    int index = it - seoul.begin(); // 주소값- 첫번째 주소값

    answer = "김서방은 " + to_string(index) + "에 있다";
    return answer;
}