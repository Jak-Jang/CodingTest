#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) 
{
    unordered_map<string, int> ranking;
    for(int i = 0; i < players.size(); i++)
        ranking.insert({ players[i], i });
    
    for(int i = 0; i < callings.size(); i++)
    {
        int rank = ranking[callings[i]];
        
        string front = players[rank - 1];
        players[rank - 1] = players[rank];
        players[rank] = front;
        
        ranking[front] = rank;
        ranking[callings[i]] = rank -1;
    }
    
    return players;
}