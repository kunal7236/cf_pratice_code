#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b) { return (b == 0) ? a : gcd(b, a % b); }
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        long g = gcd(a, b);
        cout << ((b % a ? a : b) / g) * b << endl;
    }
    return 0;
}