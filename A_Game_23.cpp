#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1;
        return 0;
    }

    long long ratio = m / n;
    int count = 0;

    while (ratio % 2 == 0) {
        ratio /= 2;
        count++;
    }
    while (ratio % 3 == 0) {
        ratio /= 3;
        count++;
    }

    if (ratio == 1)
        cout << count;
    else
        cout << -1;

    return 0;
}
