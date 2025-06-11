#include <vector>
using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int w;
    int h;
    if(sizes[0][0] >= sizes[0][1])
    {
        w = sizes[0][0];
        h = sizes[0][1];
    }
    else
    {
        w = sizes[0][1];
        h = sizes[0][0];
    }
        
    for(int i = 1; i < sizes.size(); i++)
    {
        if(sizes[i][0] >= sizes[i][1])
        {
            if(sizes[i][0] > w)
            {
                w = sizes[i][0];
            }
            if(sizes[i][1] > h)
            {
                h = sizes[i][1];
            }
        }
        else
        {
            if(sizes[i][0] > h)
            {
                h = sizes[i][0];
            }
            if(sizes[i][1] > w)
            {
                w = sizes[i][1];
            }
        }
    }
    return w * h;
}