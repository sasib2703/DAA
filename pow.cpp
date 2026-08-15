#include <bits/stdc++.h>
using namespace std;

// Method 1: Iterative approach - O(n)
int main()
{
    int x, n;
    cout << "Enter x and n: ";
    cin >> x >> n;

    int sum = 0;
    int power = 1;

    for(int i = 0; i <= n; i++)
    {
        sum = sum + power;
        power = power * x;
    }

    cout << "Sum using iterative method = " << sum << endl;

    // Method 2: Using formula - O(1)
    int sum2;

    if(x == 1)
        sum2 = n + 1;
    else
        sum2 = (pow(x, n + 1) - 1) / (x - 1);

    cout << "Sum using formula = " << sum2 << endl;

    return 0;
}