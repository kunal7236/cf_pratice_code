#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<int> st;
        st.reserve(n);
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            st.insert(temp);
        }
        cout << st.size() << endl;
    }
    return 0;
}