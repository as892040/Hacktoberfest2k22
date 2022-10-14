#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      map<int,int>m;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
      }
      if(m.size()!=n){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    return 0;
}
