#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int min_coins[amount+1];
        for(int i=0;i<amount+1;i++)
            min_coins[i]=10000;
        min_coins[0]=0;
        for(int i=1;i<amount+1;i++){
            for(int j=0;j<coins.size();j++){
                if(i>=coins[j]){
                    min_coins[i]=min(min_coins[i],1+min_coins[i-coins[j]]);
                }
            }
        }
        if(min_coins[amount]==10000)
            return -1;
        else
            return min_coins[amount];
    }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll amount,m,x;
	cin>>amount>>m;
	vector <int> coins;
	for(ll i=0;i<m;i++){
		cin>>x;
		coins.push_back(x);
	}
	int result = coinChange(coins,amount);
	cout<<result;
	return 0;
}