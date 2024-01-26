#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;
const int MAXN = 1005;
struct node{
	int x,y;
};
int n,m,k;
int nextt[4][2] = {1,0,0,1,-1,0,0,-1};
char a[MAXN][MAXN];
queue<node> q,q_tmp,zero;
node tmp,tt;
int main() {
	scanf("%d%d",&n,&m);
	getchar();
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= m;j++) {
			scanf("%c",&a[i][j]);
			tmp.x = i,tmp.y = j;
			if(a[i][j]=='g') q.push(tmp);
		}
		getchar();
	}
	scanf("%d",&k);
	while(k--) {
		while(!q.empty()) {
			tmp = q.front();
			q.pop();
			for(int i = 0;i < 4;i++) {
				int tx = tmp.x + nextt[i][0];
				int ty = tmp.y + nextt[i][1];
				if(tx<1||tx>n||ty<1||ty>m) continue;
				if(a[tx][ty]=='g') continue;
				a[tx][ty] = 'g';
				tt.x = tx,tt.y = ty;
				q_tmp.push(tt);
			}
		}
		q = q_tmp;
		q_tmp = zero;
	}
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= m;j++) {
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
