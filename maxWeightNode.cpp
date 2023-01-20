#include <bits/stdc++.h>
using namespace std;
int maxWeightCell(int N, vector<int> Edge)
{
    vector<int> x(N, 0);
    for (int i = 0; i < N; i++)
    {
        if (Edge[i] >= 0)
            x[Edge[i]] += i;
    }
    int node = 0;
    int max = x[node];
    for (int i = 1; i < N; i++)
    {
        if (x[i] > max)
        {
            node = i;
            max = x[i];
        }
    }
    return node;
}
int main()
{
    return 0;
}