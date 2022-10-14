#include<bits/stdc++.h>
using namespace std;
long long t,n,m,a[100001],k;
string s;
int main ()
{
	cin >>t;
	for (int j=1;j<=t;j++)
    {
    	cin >>n;
    	for (int i=1;i<=n;i++)
    	{
    		cin >>a[i];
		}
		for (int i=1;i<=n;i++)
		{
			cin >>m>>s;
			for (int k=0;k<s.size();k++)
			{
				if (s[k]=='D')
				{
					if (a[i]!=9)
					a[i]++;
					else
					a[i]=0;
				}
				else
				{
				if (a[i]!=0)
				a[i]--;
				else
				a[i]=9;
			    }
			}
		}
		for (int i=1;i<=n;i++)
		{
			cout <<a[i]<<" ";
		}
		cout <<endl;
	}
}
