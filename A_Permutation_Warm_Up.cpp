#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long k = n >> 1;
        if (n & 1)
            cout << k * (k + 1) + 1 << endl;
        else
            cout << k * k + 1 << endl;
    }
    return 0;
}