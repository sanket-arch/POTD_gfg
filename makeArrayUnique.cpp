#include <bits/stdc++.h>
using namespace std;

long long int minIncrements(vector<int> arr, int N)
{
    sort(arr.begin(), arr.end());
    long long int count = 0;
    for (int i = 1; i < N; i++)
    {
        if (arr[i - 1] >= arr[i])
        {
            int ele = arr[i - 1] + 1;
            count += ele - arr[i];
            arr[i] = ele;
        }
    }
    return count;
}

int main()
{
    return 0;
}