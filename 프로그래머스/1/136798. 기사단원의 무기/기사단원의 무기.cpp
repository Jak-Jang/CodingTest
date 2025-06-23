using namespace std;

int Divisor(int num)
{
    int count = 0;
    for(int i = 1; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            count += 2;
            
            if(i * i == num)
            {
                count--;
            }
        }
        

    }
    return count;
}

int solution(int number, int limit, int power) 
{
    int answer = 0;
    
    for(int i = 1; i <= number; i++)
    {
        if(Divisor(i) > limit)
        {
            answer += power;
        }
        else
        {
            answer += Divisor(i);
        }
    }
    
    return answer;
}