#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <cstring>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int n,m;
ll a[N],t,f,ans,ed=-1;
map<ll,ll> mp;
int main(){
	ios::sync_with_stdio();
	cin.tie();cout.tie();
	int x,i,b,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		mp[x]++;
	}
	cin>>m;
	for(i=1;i<=m;i++) cin>>a[i];
	for(i=1;i<=m;i++)
	{
		cin>>b;
		t=mp[a[i]]*100000+mp[b];
		if(ed<t) 
		{
			ed=t;
			ans=i;
			
		}
	}
	cout<<ans;
	return 0;
}
//
 	 	 	   		   	  	    	 	  	
