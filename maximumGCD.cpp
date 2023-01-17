#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
    int node = 0, max = 0;

public:
    void solve(Node *root)
    {
        if (root == nullptr)
            return;
        if (root->left == nullptr && root->right == nullptr)
            return;
        solve(root->left);
        solve(root->right);
        if (root->left && root->right)
        {
            int gd = __gcd(root->left->data, root->right->data);
            if (gd > max)
            {
                node = root->data;
                max = gd;
            }
            if (gd == max && node < root->data)
                node = root->data;
            return;
        }
    }
    int maxGCD(Node *root)
    {
        if (root == nullptr)
            return 0;
        solve(root);
        return node;
    }
};

int main()
{
    return 0;
}