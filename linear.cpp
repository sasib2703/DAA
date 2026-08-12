#include <iostream>
using namespace std;

int linearsearch(int a[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[100], n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int res = linearsearch(a, n, key);

    if(res != -1)
    {
        cout << "Element found at index " << res;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}