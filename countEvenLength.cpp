#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
long long inv(long long int r)
{
    if (r == 1)
        return 1;
    return (mod - (mod / r) * inv(mod % r) % mod + mod) % mod;
}
int compute_value(int n)
{
    long long int ncr = 1;
    long long int result = 1;
    for (int i = 1; i <= n; i++)
    {
        ncr = (((ncr * (n + 1 - i)) % mod) * inv(i)) % mod;
        result = (result + (ncr * ncr) % mod) % mod;
    }
    return result % mod;
}
int main()
{
    int N = 30;
    cout << compute_value(N);
    return 0;
}