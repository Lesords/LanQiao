#include<iostream>//ac
#define ll long long
using namespace std;
const int MAXN = 2e6 + 5;
int prime[MAXN],n;
int main() {
	ll ans = 0;
	cin>>n;
	for(int i = 2;i <= n;i++) {
		if(prime[i]) continue;
		for(int j = i+i;j <= n;j+=i) prime[j] = 1;
	}//0ÎªËØÊý
	for(int i = 2;i <= n;i++) if(!prime[i]) ans += i;
	cout<<ans<<endl;
	return 0;
}
