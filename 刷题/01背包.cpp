#include<iostream>//ac
#include<algorithm>
using namespace std;
const int MAXN = 205;
int a[MAXN],b[MAXN],dp[5005];
int main() {
	int n,m;
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>a[i]>>b[i];
	for(int i = 1;i <= n;i++) {
		for(int j = m;j >= a[i];j--) {
			dp[j] = max(dp[j],dp[j-a[i]]+b[i]);
		}
	}
	cout<<dp[m];
	return 0;
}
