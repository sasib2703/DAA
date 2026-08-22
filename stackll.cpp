#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;

void push(int x)
{
    Node *newNode = new Node();

    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop()
{
    if(top == NULL)
    {
        cout << "Stack Underflow\n";
        return;
    }

    Node *temp = top;
    cout << "Deleted: " << top->data << endl;
    top = top->next;
    delete temp;
}

void peek()
{
    if(top == NULL)
        cout << "Stack is empty\n";
    else
        cout << "Top element: " << top->data << endl;
}

void display()
{
    if(top == NULL)
    {
        cout << "Stack is empty\n";
        return;
    }

    Node *temp = top;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    int choice, x;

    do
    {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cin >> x;
                push(x);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}