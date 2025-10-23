#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int ans = -1;
        string cur = x;

        for (int op = 0; op <= 6; ++op) {
            if (cur.find(s) != string::npos) {
                ans = op;
                break;
            }
            cur += cur;
        }

        cout << ans << "\n";
    }

    return 0;
}
