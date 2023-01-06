#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
};
int max(int a, int b)
{
    return a > b ? a : b;
}
vector<int> maximumValue(Node *node)
{
    vector<int> v;
    queue<Node *> que;
    que.push(node);

    while (que.size() > 0)
    {
        int s = que.size();
        int m = 0;
        while (s > 0)
        {
            Node *p = que.front();
            que.pop();
            m = max(m, p->value);
            if (p->left != nullptr)
                que.push(p->left);
            if (p->right != nullptr)
                que.push(p->right);
            s--;
        }
        v.push_back(m);
    }
    return v;
}
int main()
{
    return 0;
}