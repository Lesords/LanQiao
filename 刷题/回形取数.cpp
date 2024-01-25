#include<iostream>//ac
using namespace std;

//题解：先输出起点并标记，然后输出目的点（下一个点），并标记

const int MAXN = 205;
int map[MAXN][MAXN],vis[MAXN][MAXN];
int main() {
	int m,n,cnt = 1;
	cin>>m>>n;
	for(int i = 1;i <= m;i++)
		for(int j = 1;j <= n;j++) cin>>map[i][j];
	int x = 1,y = 1;
	cout<<map[x][y],vis[x][y] = cnt;//先输出起点,并标记
	while(cnt!=m*n) {//总共m*n个点
		//只需要判断走的方向是否有越界或已经过即可
		while(x+1<=m&&!vis[x+1][y]) {//先向下
			cout<<' '<<map[++x][y],vis[x][y] = ++cnt;
		}
		while(y+1<=n&&!vis[x][y+1]) {//再向右
			cout<<' '<<map[x][++y],vis[x][y] = ++cnt;
		}
		while(x-1>=1&&!vis[x-1][y]) {//然后向上
			cout<<' '<<map[--x][y],vis[x][y] = ++cnt;
		}
		while(y-1>=1&&!vis[x][y-1]) {//最后向左
			cout<<' '<<map[x][--y],vis[x][y] = ++cnt;
		}
	}
	return 0;
}
