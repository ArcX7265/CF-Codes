#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;

        long long result;
        long long mod = n % 4;

        if (x % 2 == 0) {
            if (mod == 0) result = x;
            else if (mod == 1) result = x - n;
            else if (mod == 2) result = x + 1;
            else result = x + n + 1;
        } else {
            if (mod == 0) result = x;
            else if (mod == 1) result = x + n;
            else if (mod == 2) result = x - 1;
            else result = x - n - 1;
        }

        cout << result << "\n";
    }

    return 0;
}
