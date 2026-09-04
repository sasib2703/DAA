#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    float a[n];

    cout<<"Enter "<<n<<" elements between 0 and 1: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<float> bucket[n];

    for(int i=0;i<n;i++)
    {
        int index=n*a[i];
        bucket[index].push_back(a[i]);
    }

    for(int i=0;i<n;i++)
        sort(bucket[i].begin(),bucket[i].end());

    cout<<"Sorted array: ";

    for(int i=0;i<n;i++)
        for(float x:bucket[i])
            cout<<x<<" ";

    return 0;
}