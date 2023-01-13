#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

Node *mergeList(Node *a, Node *b)
{
    Node *temp = new Node(0);
    Node *res = temp;

    while (a != nullptr && b != nullptr)
    {
        if (a->data < b->data)
        {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else
        {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }

        if (a)
            temp->bottom = a;
        else
            temp->bottom = b;
    }
    return res->bottom;
}

Node *flatten(Node *root)
{
    if (root == nullptr || root->next == nullptr)
        return root;

    // Reach at rightmost end of the linked list
    root->next = flatten(root->next);
    root = mergeList(root, root->next);
    return root;
}
int main()
{
    return 0;
}