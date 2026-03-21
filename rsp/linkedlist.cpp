#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())

struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int v) : data(v), next(nullptr) {}
};

class LinkedList
{
public:
    ListNode *head = nullptr;
    // Insert at the front
    void push_front(int v)
    {
        ListNode *n = new ListNode(v);
        n->next = head;
        head = n;
    }

    // Insert at the back
    void push_back(int v)
    {
        ListNode *n = new ListNode(v);
        if (!head)
        {
            head = n;
            return;
        }
        ListNode *cur = head;
        while (cur->next)
            cur = cur->next;
        cur->next = n;
    }

    void delete_value(int v)
    {
        if (!head)
            return;
        if (head->data == v)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        ListNode *cur = head;
        while (cur->next && cur->next->data != v)
            cur = cur->next;
        if (cur->next)
        {
            ListNode *temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
        }
    }
    void print()
    {
        ListNode *cur = head;

        cout << "Linked List: ";
        while (cur)
        {
            cout << cur->data << "  ";
            cur = cur->next;
        }
        cout << "\n";
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    LinkedList llist;
    llist.push_back(1);
    llist.push_back(2);
    llist.push_front(0);
    llist.push_back(3);
    llist.print();
    llist.delete_value(2);
    llist.print();

    return 0;
}