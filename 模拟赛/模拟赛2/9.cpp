#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#define two(x) (x)*(x)
using namespace std;
typedef long long ll;
const int MAXN = 1e5+5;
struct node{
	int x,y,r,num;
	friend bool operator < (node a,node b) {
		if(a.x!=b.x) return a.x < b.x;
		else if(a.y!=b.y) return a.y < b.y;
		else return a.r < b.r;
	}
}a[MAXN];
int book[MAXN];
double getdis(int s,int e) {
	return sqrt(two(a[s].x-a[e].x)+two(a[s].y-a[e].y));
}
int main() {
	int n,ans = 0;
	cin>>n;
	priority_queue<node> q;
	node tmp;
	for(int i = 1;i <= n;i++) {
		cin>>a[i].x>>a[i].y>>a[i].r;
		a[i].num = i;
		q.push(a[i]);
	}
	while(q.size()) {
		tmp = q.top();
		q.pop();
		int flag = 0;
		for(int i = 1;i <= n;i++) {
			if(!book[i]) continue;
			if(getdis(i,tmp.num)<double(tmp.r+a[i].r)) {
				flag = 1;break;
			}
		}
		if(flag) continue;
		book[tmp.num] = 1;
		ans += two(tmp.r);
	}
	cout<<ans;
	return 0;
}
