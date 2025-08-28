#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) 
{
    int time = 0;
    int totalWeight = 0;
    queue<int> waiting; // 대기 중인 트럭
    queue<pair<int, int>> crossing; // 트럭의 무게와 진입 시간

    for (int it : truck_weights) waiting.push(it); // 모든 트럭을 큐에 담기

    while (!waiting.empty() || !crossing.empty())
    {
        time++;

        if (!crossing.empty() && crossing.front().second + bridge_length == time) 
        {
            totalWeight -= crossing.front().first;
            crossing.pop();
        }

        if (!waiting.empty() && totalWeight + waiting.front() <= weight && crossing.size() < bridge_length) 
        {
            totalWeight += waiting.front();
            crossing.push({waiting.front(), time});
            waiting.pop();
        }
    }

    return time;
}