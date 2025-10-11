#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        string text = "codeforces";

        if (text.find(str) != string::npos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
