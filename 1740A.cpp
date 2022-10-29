#include<bits/stdc++.h>
using namespace std;
#define E "\n"
#define read(x) int x; cin>>x
#define readstr(s) string s; cin>>s
#define ll long long
#define vi  vector<int> 
#define vvi vector<vector<int>>
#define mi map<int,int>
#define pr  pair<int,int>
#define unset unordered_set<int>
#define ff first
#define ss second
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define fr(i,n) for(int i=0; i<n; i++)
#define all(x) (x).begin(), (x).end()
#define acc(x) accumulate(all(x),0LL)
#define qpr queue<pair<int,int>>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define yes cout << "YES" << E
#define no cout << "NO" << E

const int MOD=1e9+7;

/*------------------------------------------------------------------*/
int modexp(int a, int b, int m) {a %= m;int res = 1LL;while (b > 0) {if (b & 1)res = (res%m *1LL* a%m) % m;a = (a%m *1LL* a%m) % m;b >>= 1;}return res%m;}
bool isPrime(int n){for(int i=2;i*i<=n;i++){if(n%i==0)return false;}return true;}
void primeSieve(vector<bool> &sieve,int maxi) {sieve[0] = sieve[1] = false; for (int i = 2; i*i<= maxi; i++) { if (sieve[i]) {for (int j = i*i; j <= maxi; j += i) sieve[j] = false; }}}
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
int no_of_digits(int n) { return ((log10(n))+1); }
bool isPowerOfTwo(ll n) {return (n>0 && (n&(n-1))==0);}
// int to char   char ch= num + 48 (ascii of 0)
void printMatrix(vector<vector<int>> &A){for(int i=0;i<A.size();i++){for(int j=0;j<A[i].size();j++){cout<<A[i][j]<<' ';}cout<<endl;}}
void printArr(vi &arr) {fr(i,arr.size()) cout<<arr[i]<<' '; cout<<E; }
 //string integer_to_binary_string = bitset<32>(n).to_string();

/*----------------------------------------------------------------*/
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   read(T);
   fr(t,T)
   {
       read(n);
       cout<<n<<E;
   }
    return 0;
}
