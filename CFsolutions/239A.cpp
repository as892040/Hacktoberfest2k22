
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,t;
   cin>>n>>k>>t;
    int p=n%k;
   int x=k-p;
   int y=t-n;
  
   if(x>y)
   cout<<"-1"<<endl;
   else
   {
       cout<<x<<" ";
       x+=k;
       while(x<=y)
       {
           cout<<x<<" ";
           x+=k;
       }
   }
   return 0;
}
