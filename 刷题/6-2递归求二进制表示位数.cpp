#include<iostream>//ac
using namespace std;
int main() {
	int n,ans = 0;
	cin>>n;
	while(n) {
		ans++;
		n >>= 1;
	}
	cout<<ans;
	return 0;
}
