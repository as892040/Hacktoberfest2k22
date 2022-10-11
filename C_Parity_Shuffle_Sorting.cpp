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
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool sorted = true;

    for(int i = 0; i < n-1; i++) if(a[i] > a[i+1]) sorted = false;

    if(sorted){
        cout << 0 << endl;
        return;
    }

    cout << n-1 << endl;


    bool even_string = true;
    bool odd_string = true;

    for(int i = 0; i < n; i++){
        if(a[i]&1) even_string = false;
        else odd_string = false;
    }
    if(odd_string){
        for(int i = 1; i < n; i++) cout << i << " " << n << endl;
        return;
    }
    if(even_string){
        for(int i = 1; i < n; i++) cout << i << " " << n << endl;
        return;
    }
    //-------------------------------------------------
    
    if(a[0]&1){
        int index = 1;
        for(int i = n; i > 1; i--){
            if(a[i-1]&1){
                index = i;
                // cout << a[0] << " --" << a[i-1] << endl;
                a[0] = a[i-1];
                break;
            }
        }
        if(index!=1) cout << 1 << " " << index << endl;
        for(int i = 2; i <= n; i++){
            if(i == index);
            else{
                // cout << 1 << " " << i << endl;
                if(a[i-1]%2==0) cout << 1 << " " << i << endl;
                else cout << i << " " << index << endl;
            }
        }
    }
    
    else{
        int index = 1;
        for(int i = n; i > 1; i--){
            if(a[i-1]%2 == 0){
                index = i;
                // cout << a[0] << " # " << a[i-1] << endl;
                a[0] = a[i-1];

                break;
            }
        }
        if(index!=1) cout << 1 << " " << index << endl;
        for(int i = 2; i <= n; i++){
            if(i == index);
            else{
                // cout << 1 << " " << i << endl;
                if(a[i-1]&1) cout << 1 << " " << i << endl;
                else cout << i << " " << index << endl;
            }
        }
    }
}
 
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}