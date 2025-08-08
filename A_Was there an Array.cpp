#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        string s, combined;
        for (int j = 0; j < n; ++j) {
            cin >> s;
            combined += s;
        }
        if (combined.find("101") != string::npos) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}