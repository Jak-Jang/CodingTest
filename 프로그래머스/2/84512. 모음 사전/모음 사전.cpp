#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> dictionary;
string v = "AEIOU";

void bf_dfs(string current_word) 
{
    if (current_word.length() > 5) return;

    if (!current_word.empty()) 
    {
        dictionary.push_back(current_word);
    }

    for (char it : v) 
    {
        bf_dfs(current_word + it);
    }
}

int solution(string word) 
{
    bf_dfs("");
    sort(dictionary.begin(), dictionary.end());

    for (int i = 0; i < dictionary.size(); ++i) 
    {
        if (dictionary[i] == word) return i + 1;
    }
    
    return 0;
}