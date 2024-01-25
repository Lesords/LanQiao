#include<iostream>//ac
#include<cstdio>
using namespace std;
int map[105][1005];//行表示点数，列表示边数
int main() {
	int n,m,a,b;
	cin>>n>>m;
	for(int i = 1;i <= m;i++) {//m个边（列）
		cin>>a>>b;
		map[a][i] = 1;//正为起始点
		map[b][i] = -1;//负为终点
	}
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= m;j++) {
			if(j!=1) cout<<' ';
			printf("%2d",map[i][j]);//需要格式！！！
		}
		cout<<"\n";
	}
	return 0;
}
