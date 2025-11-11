#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int bal = 0, ans = 0;
        for (char c : s) {
            if (c == '(') bal++;
            else bal--;
            if (bal < 0) {
                ans++;
                bal = 0;
            }
        }
        cout << ans << "\n";
    }
}
