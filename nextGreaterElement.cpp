#include <bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> &arr, int n)
{
    stack<int> stk;
    vector<long long> v(arr.size(), -1);
    stk.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!stk.empty() && arr[stk.top()] < arr[i])
        {

            v[stk.top()] = arr[i];
            stk.pop();
                }
        stk.push(i);
    }
    return v;
}
int main()
{
    return 0;
}