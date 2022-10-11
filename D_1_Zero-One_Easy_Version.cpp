#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
using namespace std;
 
void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    string a, b;
    cin >> a >> b;
    int ct = 0;
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            ct++;
            v.pb(i);
        }
    }
    if(ct == 0){
        cout << 0 << endl;
        return;
    }
    if(ct&1){
        cout << -1 << endl;
        return;
    }

    //printing the index of differrences
    // for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    // cout << endl;

    int cost = min(x, 2*y);
    int ans = 0;
    bool vis[v.size()];
    for(int i = 0; i < v.size(); i++) vis[i] = false;

    if(x < y){
        // cout << " condition 1 " << endl;
       for(int i = 0; i < v.size()-1; i++){
            if(v[i+1]-v[i] == 1 && !vis[i] && !vis[i+1]){
                ans += cost;
                vis[i+1] = 1;
                vis[i] = 1;
            }
        } 
        for(int i = 0; i < v.size(); i++) if(!vis[i]) ans++;
        cout << ans << endl;
        return;
    }

    if(x==y){
        // cout << " condition 2 " << endl;
        cout << v.size()/2*x << endl;
        return;
    }

    if(x > y){
        // cout << " conditon 3 " << endl;
        if(v.size() == 2){
            if(v[1]-v[0] == 1){
                if(x > 2*y) ans += 2*y;
                else ans += x;
            }
            else ans += y;
        }
        else ans += v.size()/2*y;
        cout << ans << endl;
        return;
    }
}
 
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}