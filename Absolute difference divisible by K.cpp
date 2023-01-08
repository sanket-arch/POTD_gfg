#include <bits/stdc++.h>
using namespace std;

int countPairs(int n, int arr[], int k)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] = 0;
    }
    int pair = 0;
    for (int i = 0; i < n; i++)
    {
        int d = k;
        int j = 1;
        while (d < arr[i])
        {
            int val = arr[i] - d;
            if (m[val] == 0)
            {
                pair++;
            }
            d = d * (++j);
        }
    }
    return pair;
}
int main()
{
    int A[] = {5, 5, 10, 10, 2, 1, 7.8, 9, 5};
    int n = 10;
    int k = 3;
    int pairs= countPairs(n, A, k);
    cout<<pairs;
    return 0;
}