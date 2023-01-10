#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};

int calculateSum(Node *root)
{
    if (root == nullptr)
        return 0;
    int leftSum = calculateSum(root->left);
    int rightSum = calculateSum(root->right);
    int x = root->data + leftSum + rightSum;
    root->data = leftSum + rightSum;
    return x;
}

void toSumTree(Node *node)
{
    calculateSum(node);
}

int main()
{
    return 0;
}