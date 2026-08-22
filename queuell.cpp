#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int x)
{
    Node *newNode = new Node();

    newNode->data = x;
    newNode->next = NULL;

    if(rear == NULL)
    {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void dequeue()
{
    if(front == NULL)
    {
        cout << "Queue Underflow\n";
        return;
    }

    Node *temp = front;

    cout << "Deleted: " << front->data << endl;

    front = front->next;

    if(front == NULL)
        rear = NULL;

    delete temp;
}

void peek()
{
    if(front == NULL)
        cout << "Queue is empty\n";
    else
        cout << "Front element: " << front->data << endl;
}

void display()
{
    if(front == NULL)
    {
        cout << "Queue is empty\n";
        return;
    }

    Node *temp = front;

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
        cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cin >> x;
                enqueue(x);
                break;

            case 2:
                dequeue();
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