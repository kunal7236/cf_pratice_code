#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int l = 1, h = n;
        bool flag = true;
        while (l <= h)
        {
            if (flag)
                cout << h-- << " ";
            else
                cout << l++ << " ";
            flag = !flag;
        }
        cout << endl;
    }
}