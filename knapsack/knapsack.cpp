// 0-1 Knapsack (Dynamic Programming)

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll knapsack(ll capacity,ll weight[],ll value[],ll n){
	if(capacity==0 || n==0)
		return 0;
	
	ll dp[n+1][capacity+1];
	for(ll i=0;i<n+1;i++){
		for(ll j=0;j<capacity+1;j++){
			if(i==0 || j==0)
				dp[i][j]=0;
			else if(weight[i]<=j)
				dp[i][j]=max((value[i]+dp[i-1][j-weight[i]]),dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];	
		}
	}
	return dp[n][capacity];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	ll weight[n+1],value[n+1];
	weight[0]=0,value[0]=0;
	for(ll i=1;i<n+1;i++){
		cin>>weight[i];
	}
	for(ll i=0;i<n+1;i++){
		cin>>value[i];
	}
	ll capacity;
	cin>>capacity;
	ll result = knapsack(capacity,weight,value,n);
	cout<<result<<"\n";
	return 0;
}