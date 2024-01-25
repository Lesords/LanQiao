#include<iostream>//ac
#include<cstdio>
using namespace std;
int n,m,cnt = 1;
char map[105][105];
int ans[105][105];
int nextt[8][2] = {1,1,1,0,0,1,1,-1,0,-1,-1,-1,-1,0,-1,1};
int solve(int x,int y) {//计算周围雷的数量
	int ans = 0;
	for(int i = 0;i < 8;i++) {//遍历8个方向
		int tx = x + nextt[i][0];
		int ty = y + nextt[i][1];
		if(tx<1||tx>n||ty<1||ty>m) continue;
		if(map[tx][ty]=='*') ans++;
	}
	return ans;
}
int main() {
	while(cin>>n>>m&&n+m) {
		if(cnt!=1) cout<<"\n";
		cout<<"Field #"<<cnt++<<":\n";
		for(int i = 1;i <= n;i++)
			for(int j = 1;j <= m;j++) cin>>map[i][j];
		for(int i = 1;i <= n;i++) {//遍历所有点
			for(int j = 1;j <= m;j++) {
				if(map[i][j]=='*') continue;
				ans[i][j] = solve(i,j);
			}
		}
		for(int i = 1;i <= n;i++) {//输出结果
			for(int j = 1;j <= m;j++) {
				if(map[i][j]=='*') cout<<"*";
				else cout<<ans[i][j];
			}
			cout<<"\n";
		}
	}
	return 0;
}
