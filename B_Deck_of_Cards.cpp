#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin>>t)) return 0;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt0=0,cnt2=0;
        for(char c:s){
            if(c=='0') cnt0++;
            else if(c=='2') cnt2++;
        }
        int m = n - k;
        if(m==0){
            for(int i=0;i<n;i++) cout<<'-';
            cout<<"\n";
            continue;
        }
        int Lmin = 1 + cnt0;
        int Lmax = 1 + cnt0 + cnt2;
        int maxLeft = n - m + 1;
        if(Lmin < 1) Lmin = 1;
        if(Lmin > maxLeft) Lmin = maxLeft + 1;
        if(Lmax < 1) Lmax = 1;
        if(Lmax > maxLeft) Lmax = maxLeft;
        string ans(n, '?');
        int interL = Lmax;
        int interR = Lmin + m - 1;
        for(int p=1;p<=n;p++){
            if(p < Lmin || p > Lmax + m - 1) ans[p-1] = '-';
            else if(interL <= interR && p >= interL && p <= interR) ans[p-1] = '+';
            else ans[p-1] = '?';
        }
        cout<<ans<<"\n";
    }
    return 0;
}
