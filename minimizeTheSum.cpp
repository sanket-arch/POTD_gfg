#include <bits/stdc++.h>
using namespace std;
int minimizeSum(int N, vector<int> arr)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        pq.push(arr[i]);
    }
    while (pq.size() > 1)
    {
        int firstGreater = pq.top();
        pq.pop();
        int secondGreater = pq.top();
        pq.pop();
        int intermediateSum = firstGreater + secondGreater;
        sum += intermediateSum;
        pq.push(intermediateSum);
    }
    return sum;
}
int main()
{
    return 0;
}