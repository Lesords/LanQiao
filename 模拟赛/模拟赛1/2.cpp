#include<iostream>
using namespace std;
int main() {
	int n = 1200000;
	int ans = 2;
	for(int i = 2;i*i <= n;i++) {
		if(n%i==0) {
			ans += (n/i==i)?1:2;
		}
	}
	cout<<ans<<endl;
	return 0;
}
