#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *detect(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast->next != nullptr && fast->next->next != nullptr)
    {

        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return nullptr;
}

int findFirstNode(Node *head)
{
    Node *temp = detect(head);

    if (temp == nullptr)
        return -1;
    else
    {
        Node *start = head;
        while (head != temp)
        {
            head = head->next;
            temp = temp->next;
        }
        return temp->data;
    }
}
int main()
{
    return 0;
}