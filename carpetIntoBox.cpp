#include <bits/stdc++.h>
using namespace std;
int carpetBox(int A, int B, int C, int D)
{
    int len = A, wid = B; // dimension of Carpet
    int steps = 0;
    while (len > C || wid > D)
    {
        if (len > C)
        {
            steps++;
            len /= 2;
        }
        if (wid > D)
        {
            steps++;
            wid /= 2;
        }
    }
    int prev_step = steps;
    steps = 0;
    len = B, wid = A; // rotating the carpet
    while (len > C || wid > D)
    {
        if (len > C)
        {
            steps++;
            len /= 2;
        }
        if (wid > D)
        {
            steps++;
            wid /= 2;
        }
    }
    return min(prev_step, steps);
}
int main()
{
    return 0;
}