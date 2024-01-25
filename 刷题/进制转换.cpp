#include<iostream>//ac
using namespace std;
void solve(int n) {
	cout<<'0';//前置0
	if(n==0) return;//特判0
	int ans = 0,pos = 1;//pos为位置
	while(n) {
		ans = n%8*pos + ans;
		pos *= 10;//左移
		n /= 8;
	}
	cout<<ans<<endl;
}
int main() {
	int n;
	cin>>n;
	solve(n);
	return 0;
}
