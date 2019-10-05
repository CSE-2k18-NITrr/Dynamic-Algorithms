// Longest Common Subsequence (LCS) Dynamic Programming

/********   All Required Header Files ********/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll lcs(string s1,string s2){
	ll m,n;
	m=s1.length();
	n=s2.length();
	ll dp[m+1][n+1];
	for(ll i=0;i<m+1;i++){
		for(ll j=0;j<n+1;j++){
			if(i==0 || j==0)
				dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[m][n];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1,s2;
	cin>>s1>>s2;
	ll result = lcs(s1,s2);
	cout<<result<<"\n";
	return 0;
}