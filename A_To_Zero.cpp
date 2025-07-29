#include <bits/stdc++.h>
using namespace std;
int f(int n, int k)
{
    if (k & 1)
        k--;
    return n / k + (n % k == 0 ? 0 : 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n & 1)
        {
            if (k & 1)
            {
                cout << f(n - k, k - 1) + 1 << endl;
            }
            else
            {
                cout << f(n - k + 1, k) + 1 << endl;
            }
        }
        else
        {
            cout << f(n, k) << endl;
        }
    }
    return 0;
}