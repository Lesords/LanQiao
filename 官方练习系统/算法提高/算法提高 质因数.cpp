#include<iostream>//ac
using namespace std;
int main() {
	int n,cnt = 1;
	cin>>n;
	cout<<n<<'=';
	for(int i = 2;i <= n;i++) {
		while(n%i==0) {
			if(cnt!=1) cout<<'*';//第一个不输出*
			cout<<i,cnt++;
			n /= i;
		}
	}
	return 0;
}
