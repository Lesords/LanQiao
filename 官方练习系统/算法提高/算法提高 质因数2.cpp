#include<iostream>//ac
using namespace std;
int main() {
	int n,cnt = 0;
	cin>>n;
	for(int i = 2;i <= n;i++) {
		while(n%i==0) {//可被整除时
			cout<<i<<' ',cnt++;//cnt为数量
			n /= i;
		}
	}
	cout<<"\n"<<cnt<<'\n';
	return 0;
}
