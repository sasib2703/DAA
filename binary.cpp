#include <iostream>
using namespace std;

int binarysearch(int a[], int low, int high, int key)
{
    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(key < a[mid])
        {
            high = mid - 1;
        }
        else if(key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int a[100], n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int res = binarysearch(a, 0, n - 1, key);

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