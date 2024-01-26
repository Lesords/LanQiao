#include<iostream>
#include<cstdio>
#include<cmath>
#define two(x) (x)*(x)
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;
const int MAXN = 1e3+5;
struct node{
	double x,y,h;
}a[MAXN];
double map[MAXN][MAXN];
int n,mst_vis[MAXN];
double getdis(int s,int e) {
	return sqrt(two(a[s].x-a[e].x)+two(a[s].y-a[e].y));
}
void prim(int u) {
	double ans = 0,dis[MAXN];
	for(int i = 1;i <= n;i++) {
		dis[i] = map[u][i];
	}
	mst_vis[u] = 1;
	for(int i = 1;i < n;i++) {
		int v = 0,minn = INF;
		for(int j = 1;j <= n;j++) {
			if(!mst_vis[j]&&dis[j]<minn) {
				v = j;minn = dis[j];
			}
		}
		ans += dis[v];
		mst_vis[v] = 1;
		for(int j = 1;j <= n;j++) {
			if(!mst_vis[j]&&map[v][j]<dis[j]) {
				dis[j] = map[v][j];
			}
		}
	}
	printf("%.2f",ans);
}
int main() {
	scanf("%d",&n);
	for(int i = 1;i <= n;i++) {
		scanf("%lf%lf%lf",&a[i].x,&a[i].y,&a[i].h);
	}
	for(int i = 1;i <= n;i++) {
		for(int j = i;j <= n;j++) {
			map[i][j] = map[j][i] = getdis(i,j)+two(a[i].h-a[j].h);
		}
	}
	prim(1);
	return 0;
}
