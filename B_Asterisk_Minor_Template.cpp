#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a[0] == b[0])
        {
            cout << "YES" << endl;
            cout << a[0];
            cout << "*" << endl;
            continue;
        }
        if (a.back() == b.back())
        {
            cout << "YES" << endl;
            cout << "*";
            cout << a.back() << endl;
            continue;
        }
        int n = a.size();
        bool found = false;
        for (int i = 0; i < n - 1; i++)
        {
            string temp = a.substr(i, 2);
            if (b.find(temp) != string::npos)
            {
                cout << "YES" << endl;
                cout << "*";
                cout << temp;
                cout << "*" << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "NO" << endl;
    }
    return 0;
}