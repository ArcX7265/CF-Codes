#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> G(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> G[i][j];

        int m = 2*n;
        vector<int> p(m+1, 0);

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (p[i+j+2] == 0)
                    p[i+j+2] = G[i][j];

        vector<bool> used(m+1, false);
        for (int k = 2; k <= m; k++)
            used[p[k]] = true;

        for (int x = 1; x <= m; x++)
            if (!used[x]) {
                p[1] = x;
                break;
            }

        for (int k = 1; k <= m; k++)
            cout << p[k] << " ";
        cout << "\n";
    }
}
