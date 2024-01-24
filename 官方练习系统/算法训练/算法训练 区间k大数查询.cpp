#include<iostream>//ac
#include<algorithm>
using namespace std;
const int MAXN = 1005;//数据范围为1-1000
int a[MAXN],b[MAXN];
bool cmp(int a,int b) {//升序排序规则
	return a > b;
}
int main() {
	int n,m,l,r,k;
	cin>>n;
	for(int i = 1;i <= n;i++) cin>>a[i];
	cin>>m;
	while(m--) {
		cin>>l>>r>>k;
		int cnt = 1;//选取范围内的数据，然后排序
		for(int i = l;i <= r;i++,cnt++) b[cnt] = a[i];
		sort(b+1,b+cnt,cmp);//升序
		cout<<b[k]<<'\n';//找第k个即为第k大
	}
	return 0;
}
