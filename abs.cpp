#include <bits/stdc++.h>
using namespace std;

int countPairs(int n, int arr[], int k)
{
    long long pair=0;
    int *mp=new int[k+1];
    for(int i=0;i<n;i++)
    {
        pair=mp[arr[i]%k];
        mp[arr[i]%k]++;
    }
    return pair;
}
int main()
{
    int A[] = {5, 5, 10, 10, 2, 1, 7,8, 9, 5};
    int n = 10;
    int k = 3;
    int pairs= countPairs(n, A, k);
    cout<<pairs;
    return 0;
}