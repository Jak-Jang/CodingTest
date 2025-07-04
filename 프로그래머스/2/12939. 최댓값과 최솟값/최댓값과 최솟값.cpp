#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) 
{
    string answer = "";
    string temp;
    vector<int> n;
    stringstream sstr(s);
    while(sstr)
    {
        sstr >> temp;
        n.push_back(stoi(temp));
    }
    
    answer += to_string
    (
        n[min_element(n.begin(), n.end()) - n.begin()]
    );
    answer += " ";
    answer += to_string
    (
        n[max_element(n.begin(), n.end()) - n.begin()]
    );
    return answer;
}