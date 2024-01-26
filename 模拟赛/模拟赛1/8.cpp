#include<iostream>//ÐÞ¸Äºó
#include<cmath>
using namespace std;
const int mod = 10000;
int n,ans;
void solve(int last,int n) {
	/*if(last<=n+1||n==0) {
		ans = (ans+1)%mod;return;
	}*/
	if(abs(last-n)<1||n==0) {
		ans = (ans+1)%mod;return;
	}
	for(int i = 0;i < abs(last-n);i++) {
		solve(n,i);
	}
}
int main() {
	cin>>n;
	for(int i = 1;i <= n;i++) {
		solve(n,i);
	}
	cout<<ans%mod<<endl;
	return 0;
}
