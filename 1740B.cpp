#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<ll, ll>> x(n);
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> x[i].first >> x[i].second;
            if (x[i].first < x[i].second) {
                swap(x[i].first, x[i].second);
            }
            ans += x[i].second;
        }
        ans *= 2;
        sort(x.rbegin(), x.rend());
        ans+=x[0].first;
        ans+=x[n-1].first;
        for(int i=0;i<n-1;i++){
            ans+=x[i].first-x[i+1].first;
        }
        cout<<ans<<'\n';
    }
}
