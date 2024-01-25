#include<iostream>//ac
#include<cstdio>
#include<algorithm>
const int MAXN = 1e5+5;//数组开小了
using namespace std;
struct node{
	double w,val,pro;
	friend bool operator < (node a,node b) {
		return a.pro > b.pro;//比值大的先装
	}
}a[MAXN];
int main() {
	int n,w;
	double ans = 0;
	scanf("%d%d",&n,&w);
	for(int i = 1;i <= n;i++) {
		scanf("%lf%lf",&a[i].w,&a[i].val);
		a[i].pro = a[i].val/a[i].w;
	}
	sort(a+1,a+1+n);
	for(int i = 1;i <= n;i++) {
		if(w>a[i].w) {//够装
			ans += a[i].val;
			w -= a[i].w;
		}
		else {//不够装（最后一次装）
			ans += w/a[i].w*a[i].val;
			break;
		}
	}
	printf("%.1f\n",ans);
	return 0;
}
