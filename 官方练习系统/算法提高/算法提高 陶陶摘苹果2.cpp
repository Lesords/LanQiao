#include<iostream>//ac
using namespace std;
int main() {
	int n,m,tmp,ans = 0;
	cin>>n>>m;
	for(int i = 1;i <= n;i++) {
		cin>>tmp;
		if(tmp>m+30) ans++;//��������ƻ��
	}
	cout<<ans;
	return 0;
}
