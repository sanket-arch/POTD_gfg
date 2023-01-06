#include <bits/stdc++.h>
using namespace std;

int minLaptops(int N, int start[], int end[])
{
    sort(start, start + N);
    sort(end, end + N);

    int j = 0;
    int laptop = 0;
    for (int i = 1; i < N; i++)
    {
        if (start[i] < end[j])
        {
            laptop++;
        }
        else
        {
            j++;
        }
    }
    return laptop + 1;
}
int main()
{
    return 0;
}