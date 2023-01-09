#include <bits/stdc++.h>
using namespace std;

int longestIncreaseSubsequence(vector<int> A)
{
    vector<int> v;
    v.push_back(A[0]);
    int count = 1;
    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] > v.back())
        {
            v.push_back(A[i]);
            count++;
        }
        else
        {
            int idx = lower_bound(v.begin(), v.end(), A[i]) - v.begin();
            v[idx] = A[i];
        }
    }
    return count;
}

int removeStudents(int H[], int N)
{
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        A.push_back(H[i]);
    }
    int ans = N - longestIncreaseSubsequence(A);
    return ans;
}
int main()
{
    int A[] = {9, 1, 2, 3, 1, 5};
    int size = 6;
    cout << removeStudents(A, size);
    return 0;
}