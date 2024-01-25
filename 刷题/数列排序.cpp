#include<iostream>//ac
#include<algorithm>
using namespace std;
const int MAXN = 205;
int a[MAXN];
int main() {
	int t;
	cin>>t;
	for(int i = 1;i <= t;i++) cin>>a[i];
	sort(a+1,a+t+1);
	for(int i = 1;i <= t;i++) {
		if(i!=1) cout<<' ';
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
