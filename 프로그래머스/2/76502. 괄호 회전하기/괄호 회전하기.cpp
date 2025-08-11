#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        string temp = s.substr(i) + s.substr(0, i);
        stack<int> st;
        
        for (char it : temp)
        {
            if (it == '[' || it == '(' || it == '{' || st.empty())
            {
                st.push(it);
            }
            else
            {
                if (st.top() == ']' || st.top() == ')' || st.top() == '}')
                    break;
                
                if ((it - st.top()) <= 2)
                    st.pop();
                else
                    st.push(it);
            }
        }
        
        if(st.empty()) answer++;
    }    
    
    return answer;
}