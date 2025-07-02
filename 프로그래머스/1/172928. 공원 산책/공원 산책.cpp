#include <string>
#include <vector>

using namespace std;


//vec[i][j] / E j++ / W j-- / N i-- / S i++
vector<int> solution(vector<string> park, vector<string> routes) 
{
    vector<int> answer;
    int x = 0, y = 0;
    int move;
    bool check;
    for(int i = 0; i < park.size(); i++)
    {
        for(int j = 0; j < park[i].size(); j++)
        {
            if(park[i][j] == 'S')
            {
                y = i;
                x = j;
                break;
            }
        }
        if(park[y][x] == 'S') break;
    }
    
    for(int i = 0; i < routes.size(); i++)
    {
        move = routes[i][2] - '0';
        check = true;
        
        if(routes[i][0] == 'E') // j+
        {
            if(x + move >= park[y].size()) check = false;
            else
            {
                for(int k = 1; k <= move; k++)
                {
                    if(park[y][x + k] == 'X') 
                    {
                        check = false;
                        break;
                    }
                }
            }
            if(check) x += move;
        }
        
        if(routes[i][0] == 'W') // j-
        {
            if(x - move < 0) check = false;
            else
            {
                for(int k = 1; k <= move; k++)
                {
                    if(park[y][x - k] == 'X') 
                    {
                        check = false;
                        break;
                    }
                }
            }
            if(check) x -= move;
        }
        
        if(routes[i][0] == 'S') // i+
        {
            if(y + move >= park.size()) check = false;
            else
            {
                for(int k = 1; k <= move; k++)
                {
                    if(park[y + k][x] == 'X')
                    {
                        check = false;
                        break;
                    }
                }
            }
            if(check) y += move;
        }
        
        if(routes[i][0] == 'N') // i-
        {
            if(y - move < 0) check = false;
            else
            {
                for(int k = 1; k <= move; k++)
                {
                    if(park[y - k][x] == 'X') 
                    {
                        check = false;
                        break;
                    }
                }
            }
            if(check) y -= move;
        }
    }
    answer.push_back(y);
    answer.push_back(x);
    return answer;
}