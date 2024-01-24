#include<iostream>//ac
#define ll long long
using namespace std;
int main() {
	ll n,ans = 1;//数据范围为1e12，爆int了
	cin>>n;
	for(ll i = 2;i <= n;i++) {//遍历所有数
		ll flag = 1;
		while(n%i==0) {//若为因子
			flag = i;
			n /= i;//去除所有可被除的因子
		}
		ans *= flag;//因子只需要乘1次
	}
	cout<<ans;
	return 0;
}
