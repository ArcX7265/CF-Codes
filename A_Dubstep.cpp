#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string res;
    for (int i = 0; i < (int)s.size(); ) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            res += ' ';
            i += 3;
        } else {
            res += s[i];
            i++;
        }
    }

    string ans;
    stringstream ss(res);
    string word;
    while (ss >> word) {
        if (!ans.empty()) ans += " ";
        ans += word;
    }

    cout << ans;
    return 0;
}
