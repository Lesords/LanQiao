#include<iostream>
using namespace std;
int ans = 0;
void solve(int n) {
	while(n) {
		if(n%10==9) {
			ans++;
			return;
		}
		n /= 10;
	}
}
int main() {
	int n = 2019;
	for(int i = 1;i <= n;i++) {
		solve(i);
	}
	cout<<ans<<endl;
	return 0;
}
