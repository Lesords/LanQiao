#include<iostream>//ac
using namespace std;
const int MAXN = 1e4+5;
int a[MAXN];
int main() {
	int len,m,l,r,ans = 0;
	cin>>len>>m;
	while(m--) {
		cin>>l>>r;
		for(int i = l;i <= r;i++) a[i] = 1;//移出的标记为1
	}//0为保留下来的树
	for(int i = 0;i <= len;i++) ans += a[i]?0:1;
	cout<<ans;
	return 0;
}
