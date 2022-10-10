// *****************************code by introvert********************************
#include"bits/stdc++.h"
 
using namespace std;
using namespace std :: chrono;
//const int Ni=200005;
//vector<int> adj[Ni];
//vector<int> sum(Ni);
//vector<int> depth(Ni);
//vector<int> height(Ni);
int M=1e9+7;
double PI=3.141592653589793238;
 
#define FASTIO                                 ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define vip(x,p)                               for(int i=0;i<p;i++) {cin>>x[i];}
#define int                                    long long
#define vi                                     vector<int>
#define fo(i,b)                                for(int i=0;i<b;i++)
#define fe(i,b)                                for(int i=0;i<=b.i++)
#define Y                                      cout<<"YES"<<endl
#define N                                      cout<<"NO"<<endl
#define endl                                   "\n"
#define eb                                     emplace_back
#define pb                                     push_back
#define bs                                     binary_search
#define all(x)                                 x.begin(),x.end()
#define GCD(a,b)                               __gcd(a,b)
#define mi1                                    cout <<-1 << endl;
#define zero                                   cout << 0 << endl;
#define setbit                                 __builtin_popcountll
#define Max(x,y,z)                             max({x,y,z})
#define Min(x,y,z)                             min({x,y,z})
#define arrsorted(arr)                         is_sorted(arr.begin(),arr.end())
#define lb                                     lower_bound
#define ub                                     upper_bound
#define ff                                     first
#define ss                                     second
#define mx_ele(a)                              *max_element(all(a))
#define mi_ele(a)                              *min_element(all(a))   
 
void __print(int x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
 
 
#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
 
int msb(int);
int lsb(int);
int power(int,int);
bool isPowerOfTwo(int);
int gcd (int , int );
 
//*********************************************************************************************************************************************************************************************
//**** COMPARATOR FUNCTION ****
 
bool compare(int t, int r){
  
 return t%2<r%2;
 
}
 
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//*****AUXILLARY CHECKER FUNCTION *****
 
bool check(int &mid, vi &a , vi &b){
 
for(int i=0; i<a.size(); i++){
  if(b[i]==1 and mid < 1900){
    if(1900-mid>=0){
      return true;
    }
    else{
      return false;
    }
  }
  else if(b[i]==2 and mid > 1899){
     if(1899-mid>=0){
      return true;
     }
     else{
      return false;
     } 
  }
  mid+=a[i];
}
 
 return false;
 
}
 
//***********************************************************************************************************************************************************************************************
// **** MAIN SOLUTION ****
 
 
void solve(){
 
int  n , m;
 
cin  >>  n  >>  m;
 
vector <pair<int,int>> a(n);
vi t(n);
 
for(int i=0; i<n; i++){
  cin >> t[i] >> a[i].ff >> a[i].ss;
}
 
int mi = m;
int mx = m;
 
int prev =0;
 
for(int i=0; i<n; i++){
  mx += t[i] - prev;
  mi -= t[i] - prev;
 
  if(mx < a[i].ff or mi > a[i].ss){
    N;
    return;
  }
  mx = min( mx , a[i].ss);
  mi = max( mi , a[i].ff);
  prev = t[i];
}
 
Y;
 
}
 
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//*********************************************************************************************************************************************************************************************
//*****MAIN FUNCTION*****
signed main(){
 
 FASTIO;
 
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin );
  freopen("output.txt","w", stdout);
#endif
 
 int t=1; 
 
 cin >> t;
 
 for(int tc=1; tc<=t; ++tc){
   
 // cout << "Case #" << tc << ": "  ;
 
 solve();
 
 
 }
}
//*********************************************************************************************************************************************************************************************
// POWER FUNCTION 
 
 int power (int base, int exp){
  /*find 2^13
  res   base  exp
  1      2    13  ( when exp is odd then multiply res by base)
  1*2    2    12  (when exp is even div it by two and mutliply base by base(means square base))
  2      2^2  12/2=6
  2      16    3
  32     16    2
  32     256   1
  32*256 256   0
  iterate till exp !=0
  */
   int res = 1; 
  // base%=mod;
 
   while (exp != 0){
 
     if (exp & 1 == 1){
       res=((res)*(base));
       //res%=mod;
       exp--;
     }
     else{
       base=((base)*(base)); 
       //base%=mod;
       exp/=2;
     }
 
   }return (res);
 }
 
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
//**** TO CHECK WHETHER GIVEN NUMBER IS POWER OF TWO OR NOT ****
 
bool isPowerOfTwo(int n)
{
 if(n==0)
   return false;
 
   // to check whether both are integer or not
 return (ceil(log2(n)) == floor(log2(n)));
 
}
 
 
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
// TO CALCULATE LEAST SIGNIFACT BIT ****
 
int lsb(int n)
{  //position if n and -n = 8 then log2(n&-n)=3 ,(0001000)->binary of 8
   // plus 1 in log2(n & -n) for getting exact pos
 
 return (log2(n & -n));
 
}
 
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
//**** TO CALCULATE MOST SIGNIFICANT BIT ****
 
int msb(int n)
{
    // To find the position of the most significant set bit
  int k = (int)(log2(n));
  
    // To return the value of the number with setbit at k-th position
  return 1 << k;
}
 
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
// **** TO CALULATE GCD USING EUCLID LEMMA ****
 
int gcd (int a, int b){
  
  return  (b!=0) ? gcd (b, a % b) : a;
}
 
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
//***** PRIME NUMBERS USING SIEVE *****  T.C.:-
 
// vi SieveOfEratosthenes(int n)
// {   vi primes;
//   bool prime[n + 1];
//   int j=0;
//   memset(prime, true, sizeof(prime));
  
//   for (int p = 2; p * p <= n; p++)
//   {
//     if (prime[p] == true) 
//     {
//       for (int i = p * p; i <= n; i += p)
//         prime[i] = false;
//     }
//   }
 
//   for (int p = 2; p <= n; p++)
//     if (prime[p]) primes.pb(p);
 
//   return primes;
// }
 
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
// void prime_factor(int n){
//   int arr[n+1]={0}; vi res;
//   arr[0]=arr[1]=-1; // initialising 0 and 1 as -1 coz not div by anyone
//   for(int i=2;i<=n;i++){
//     if(arr[i]==0){ //if prime then uske multiplier k position p prime likh do
//       for(int j=i;j<=n;j+=i){
//         if(arr[j]==0)
//           arr[j]=i;
//       }
//     }
//   }
  
//   int i=n;
//   while(arr[i]!=-1){
//    res.pb(arr[i]);
//    cout<<arr[i]<<" ";
//      i=i/arr[i]; //agar no even h toh waha sbse chhota no 2 hoga 
//      // ex:- if n=30; yaha p 2 hoga fir ise 2 se div krenge or 30/2 p dekhenge kya h
//      // yaani 15 p waha 3 hoga fir 15/3 (5) p 5 hoga or 5/5 p -1
     
//    }cout<<endl;
   
//  }
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
 
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
// void prime_factor(int n){
//   int arr[n+1]={0}; vi res;
//   arr[0]=arr[1]=-1; // initialising 0 and 1 as -1 coz not div by anyone
//   for(int i=2;i<=n;i++){
//     if(arr[i]==0){ //if prime then uske multiplier k position p prime likh do
//       for(int j=i;j<=n;j+=i){
//         if(arr[j]==0)
//           arr[j]=i;
//       }
//     }
//   }
  
//   int i=n;
//   while(arr[i]!=-1){
//    res.pb(arr[i]);
//    cout<<arr[i]<<" ";
//      i=i/arr[i]; //agar no even h toh waha sbse chhota no 2 hoga 
//      // ex:- if n=30; yaha p 2 hoga fir ise 2 se div krenge or 30/2 p dekhenge kya h
//      // yaani 15 p waha 3 hoga fir 15/3 (5) p 5 hoga or 5/5 p -1
     
//    }cout<<endl;
   
//  }
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
// ****** SEGMENT TREE IMPLEMENTATION ******
 
// int seg[100001];
// int a [100001];
 
// void build(int idx, int low, int high){
//   if(low == high){
//    seg[idx] = a[low];
//    return;
//   }
 
//   int mid = (low + high)/2;
 
//   build(2*idx + 1, low, mid);
//   build(2*idx + 2, mid+1, high);
  
     // FOR MAXIMUM NUMBER
//   seg[idx] = max(seg[2*idx + 1], seg[2*idx + 2]);
 
     // FOR SUM QUERY
//   seg[idx] = seg[2*idx + 1] + seg[2*idx + 2];
 
// }
 
// int query(int idx, int low, int high, int l, int r){
//   if(low > r or high < l)return INT_MIN;
//   if(l <= low and high <= r)return seg[idx];
 
//   int mid = (low + high)/2;
 
     // FOR MAXIMUM NUMBER
//   int q1 = query(2*idx + 1, low, mid, l, r);
//   int q2 = query(2*idx + 2, mid+1, high, l, r);
//   return max(q1, q2);
 
     // FOR SUM QUERY
//   return query(2*idx + 1, low, mid, l, r) + query(2*idx + 2, mid+1, high, l, r);
 
 
// }
 
// void update (int idx, int low, int high, int node, int val){
//   if(low == high){
//     a[low] = val;
//     seg[idx] = val;
//     return;
//   }
 
//   int mid = (low + high)/2;
//   if(node <= mid) update(2*idx + 1, low, mid, node, val);
//   else  update(2*idx + 2, mid+1, high, node, val);
     
     //FOR MAX NUMBER
//   seg[idx] = max(seg[2*idx + 1], seg[2*idx + 2]);
 
     //FOR SUM QUERY
//   seg[idx] = seg[2*idx + 1] + seg[2*idx + 2];
// }
 
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
// ****** FENWICK TREE IMPLEMENTATION ******
 
// int N = 1e5;
// int fen[N];
 
// void update(int i, int add){
//   while(i < N){
//     fen[i] += add;
//     i += (i & (-i));
//   }
// }
 
// int sum(int i){
//   int s =0;
//   while(i > 0){
//     s += fen[i];
//     i -= (i & (-i));
//   }
//   return s;
// }
 
// int rangesum(int l, int r){
//   return sum(r) - sum(l-1);
// }
