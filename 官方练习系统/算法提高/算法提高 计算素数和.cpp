#include<iostream>//ac
using namespace std;
bool judge(int n) {//判断是否为素数
	for(int i = 2;i*i <= n;i++) if(n%i==0) {
		return 0;
	}
	return 1;//1为素数
}
int main() {
	int n,ans = 0;
	cin>>n;
	for(int i = 2;i <= n;i++) {
		if(judge(i)) ans += i;//只加素数
	}
	cout<<ans;
	return 0;
}
