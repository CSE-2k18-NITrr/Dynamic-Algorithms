#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(ll i=0;i<m;i++)
		cin>>a[i];
	ll combinations[n+1];
	memset(combinations, 0, sizeof(combinations));
	combinations[0]=1;
	for(ll i=0;i<m;i++){
		for(ll j=1;j<n+1;j++){
			if(j>=a[i])
				combinations[j]+=combinations[j-a[i]];
		}
	}
	cout<<combinations[n]<<"\n";
	return 0;
}