#include <bits/stdc++.h>
using namespace std;

bool inside(int x, int a, int b) {
    if (a < b)
        return (a < x && x < b);
    else
        return (x > a || x < b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool c_inside = inside(c, a, b);
        bool d_inside = inside(d, a, b);

        if (c_inside != d_inside)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
