#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int count1 = 0, count2 = 0;
        bool ok = false;

        for (int i = 0; i < 20 && !ok; i++) {
            for (int j = 0; j < n; j++) {
                char c = s[j];

                if (c == 'N') count2++;
                else if (c == 'S') count2--;
                else if (c == 'E') count1++;
                else count1--;

                if (count1 == a && count2 == b) {
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
