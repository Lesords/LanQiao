#include<iostream>//ac
using namespace std;
const int MAXN = 2e4 + 5;
int a[MAXN];
int judge(int n) {//n是ans的生成元
	int ans = n;
	while(n) {
		ans += n%10;
		n /= 10;
	}
	return ans;//说明ans不是寂寞的数
}
int main() {
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) a[judge(i)] = 1;
	for(int i = 1;i <= n;i++) {
		if(a[i]) continue;//不是寂寞的数就跳过
		cout<<i<<endl;
	}
	return 0;
}
