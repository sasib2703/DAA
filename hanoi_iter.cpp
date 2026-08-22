#include <iostream>
using namespace std;

#define MAX 100

void push(int s[], int &top, int d)
{
    s[++top] = d;
}

int pop(int s[], int &top)
{
    return s[top--];
}

void moveDisc(int s1[], int &t1, int s2[], int &t2, char p1, char p2)
{
    int d;

    if (t1 == -1)
    {
        d = pop(s2, t2);
        push(s1, t1, d);
    }
    else if (t2 == -1)
    {
        d = pop(s1, t1);
        push(s2, t2, d);
    }
    else if (s1[t1] < s2[t2])
    {
        d = pop(s1, t1);
        push(s2, t2, d);
    }
    else
    {
        d = pop(s2, t2);
        push(s1, t1, d);
    }

    cout << "Move " << d << ": " << p1 << " -> " << p2 << endl;
}

int main()
{
    int n;
    cin >> n;

    int src[MAX], aux[MAX], dest[MAX];
    int ts = -1, ta = -1, td = -1;

    for (int i = n; i >= 1; i--)
        push(src, ts, i);

    int moves = (1 << n) - 1;

    cout << "Tower of Hanoi - Iterative" << endl;
    cout << "Disks: " << n << endl;
    cout << "Total Moves: " << moves << endl << endl;

    if (n % 2 == 0)
    {
        for (int i = 1; i <= moves; i++)
        {
            if (i % 3 == 1)
                moveDisc(src, ts, aux, ta, 'S', 'A');
            else if (i % 3 == 2)
                moveDisc(src, ts, dest, td, 'S', 'D');
            else
                moveDisc(aux, ta, dest, td, 'A', 'D');
        }
    }
    else
    {
        for (int i = 1; i <= moves; i++)
        {
            if (i % 3 == 1)
                moveDisc(src, ts, dest, td, 'S', 'D');
            else if (i % 3 == 2)
                moveDisc(src, ts, aux, ta, 'S', 'A');
            else
                moveDisc(aux, ta, dest, td, 'A', 'D');
        }
    }

    return 0;
}