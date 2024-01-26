#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const int MAXN = 1e3+5;
int a[MAXN][MAXN];
int main() {
	int n,m,r,c,cnt = 1,x,y,num;
	cin>>n>>m>>r>>c;
	x = y = a[1][1] = 1;
	num = n*m;
	while(cnt<num) {
		while(y+1<=m&&!a[x][y+1]) a[x][++y] = ++cnt;
		while(x+1<=n&&!a[x+1][y]) a[++x][y] = ++cnt;
		while(y-1>=1&&!a[x][y-1]) a[x][--y] = ++cnt;
		while(x-1>=1&&!a[x-1][y]) a[--x][y] = ++cnt;
	}
	cout<<a[r][c];
	return 0;
}
