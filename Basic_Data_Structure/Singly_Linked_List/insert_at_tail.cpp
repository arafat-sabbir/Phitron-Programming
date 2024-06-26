#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 Insert At Tail:- " << endl;
        cout << "Option 2 Print Your Node Values:-" << endl;
        cout << "Option 3 Exit:-" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter New Node Value" << endl;
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            Node *tmp = head;
            cout << "Your Node Values Are :- ";
            while (tmp != NULL)
            {
                cout << tmp->val << " ";
                tmp = tmp->next;
            }
            cout<<endl;
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}