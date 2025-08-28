#include <vector>
using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int w = 0, h = 0;
        
    for(int i = 0; i < sizes.size(); i++)
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