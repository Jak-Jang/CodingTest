#include <vector>
using namespace std;

bool solution(int x) 
{
    vector<int> vec;
    int a = x, b = 0;
    
    while(a != 0) {
        vec.push_back(a % 10);
        a /= 10;
    }
    
    for (int temp : vec) { b += temp; }
    
    if(x % b != 0) { return false; }
    else { return true; }
}