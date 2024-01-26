#include<iostream>
#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
const int MAXN = 1e5+5;
int a[MAXN];
struct node{
	int num,val;
	friend bool operator < (node a, node b) {
		return a.val > b.val;
	}
}b[MAXN];
int main() {
	int n,m,cnt=0;
	set<int> s;
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++) {
		scanf("%d",&a[i]);
		b[i].val = a[i],b[i].num = i;
	}
	sort(b+1,b+n+1);
	for(int i = 1;i <= m;i++) {
		s.insert(b[i].num);
	}
	for(int i = 1;i <= n;i++) {
		if(s.count(i)) {
			cnt++;
			if(cnt!=1) cout<<' ';
			cout<<a[i];
			if(cnt==m) break;
		}
	}
	return 0;
}
