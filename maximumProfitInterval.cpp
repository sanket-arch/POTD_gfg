// It will take 2^n, so optimize it using DP.

#include <bits/stdc++.h>
using namespace std;
int max(int x, int y)
{
    return x > y ? x : y;
}
int findNext(int idx, int prevEnd, vector<vector<int>> v)
{
    int i;
    for (i = idx; i < v.size(); i++)
    {
        if (v[i][0] >= prevEnd)
        {
            break;
        }
    }
    return i;
}
int calculateMaxProfit(int idx, vector<vector<int>> v)
{
    if (idx >= v.size())
        return 0;

    int not_select = calculateMaxProfit(idx + 1, v);

    // int nextidx = lower_bound(v.begin() + idx + 1, v.end(), v[idx][1]) - v.begin();
    // int nextElement = v[nextidx][0];
    int nextElement = findNext(idx + 1, v[idx][1], v);
    int select = v[idx][2] + calculateMaxProfit(nextElement, v);
    return max(select, not_select);
}
int maximum_profit(int n, vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    return calculateMaxProfit(0, intervals);
}
int main()
{
    return 0;
}