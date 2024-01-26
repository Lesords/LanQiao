#include<iostream>
using namespace std;
int solve(int n) {
	int last = n%10;
	n /= 10;
	while(n) {
		if(last<n%10) {
			return 0;
		}
		last = n%10;
		n /= 10;
	}
	return 1;
}
int main() {
	int n,ans = 0;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		ans += solve(i);
	}
	cout<<ans<<endl;
	return 0;
}
