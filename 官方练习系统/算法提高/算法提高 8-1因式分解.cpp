#include<iostream>//ac
using namespace std;
int main() {
	int n,cnt = 1;
	cin>>n;
	for(int i = 2;i <= n;i++) {
		while(n%i==0) {
			if(cnt!=1) cout<<'*';//��һ��ǰ�治���*
			cout<<i,cnt++;
			n /= i;
		}
	}
	return 0;
}
