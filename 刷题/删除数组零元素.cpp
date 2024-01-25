#include<iostream>//ac
using namespace std;
int a[1005];
int main() {
	int n,ans = 0,tmp;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>tmp;
		if(tmp) a[++ans] = tmp;//只记录非零数
	}
	cout<<ans<<endl;
	for(int i = 1;i <= ans;i++) {
		if(i!=1) cout<<' ';
		cout<<a[i];
	}
	return 0;
}
