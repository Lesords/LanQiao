#include<iostream>//ac
using namespace std;
const int MAXN = 2e2+5;
int a[MAXN] = {0,1};
void multi(int n) {//大数阶乘
	int rest = 0;//进位数
	for(int i = 1;i < MAXN;i++) {
		a[i] = a[i]*n+rest;//当前位结果
		rest = a[i]/10;//进位数
		a[i] %= 10;//%10
	}
}
int main() {
	int n,ans;
	cin>>n;
	for(int i = 1;i <= n;i++) multi(i);
	for(int i = 1;i < MAXN;i++) if(a[i]) {
		ans = a[i];break;//找到非0数
	}
	cout<<ans;
	return 0;
}
