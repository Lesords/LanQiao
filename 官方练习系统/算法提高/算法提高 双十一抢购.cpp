#include<iostream>//ac
#include<algorithm>
using namespace std;
struct node{
	double money,earn;//半价会有小数！！！
	int num;
	friend bool operator < (node a,node b) {
		//先省，后钱，最后序号
		if(a.earn!=b.earn) return a.earn > b.earn;
		else if(a.money!=b.money) return a.money < b.money;
		else return a.num < b.num;
	}
}a[1005];
int ans[1005];
int main() {
	int n,cnt = 0;
	double s;//金额也必须用double！！！
	cin>>s>>n;
	for(int i = 1;i <= n;i++) {
		cin>>a[i].money>>a[i].earn;
		a[i].num = i;
		if(a[i].earn) {//有打折
			a[i].earn = a[i].money/2.0;
			a[i].money /= 2.0;
		}
	}
	sort(a+1,a+n+1);
	for(int i = 1;i <= n&&s;i++) {//s花完了也退出
		if(a[i].money<=s) {//够买的话
			ans[++cnt] = a[i].num;//记录对应序号
			s -= a[i].money;//扣除花的钱
		}
	}
	if(!cnt) cout<<cnt<<endl;//什么都买不来直接输出cnt
	else {
		sort(ans+1,ans+cnt+1);//先排序后输出
		for(int i = 1;i <= cnt;i++) {
			if(i!=1) cout<<' ';
			cout<<ans[i];
		}
	}
	return 0;
}
