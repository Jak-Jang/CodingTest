using namespace std;

bool solution(int x) 
{
    int a = x, b = 0;
    
    while(a != 0) {
        b += a % 10;
        a /= 10;
    }
    
    return x % b == 0;
}