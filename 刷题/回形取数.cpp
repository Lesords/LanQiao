#include<iostream>//ac
using namespace std;

//��⣺�������㲢��ǣ�Ȼ�����Ŀ�ĵ㣨��һ���㣩�������

const int MAXN = 205;
int map[MAXN][MAXN],vis[MAXN][MAXN];
int main() {
	int m,n,cnt = 1;
	cin>>m>>n;
	for(int i = 1;i <= m;i++)
		for(int j = 1;j <= n;j++) cin>>map[i][j];
	int x = 1,y = 1;
	cout<<map[x][y],vis[x][y] = cnt;//��������,�����
	while(cnt!=m*n) {//�ܹ�m*n����
		//ֻ��Ҫ�ж��ߵķ����Ƿ���Խ����Ѿ�������
		while(x+1<=m&&!vis[x+1][y]) {//������
			cout<<' '<<map[++x][y],vis[x][y] = ++cnt;
		}
		while(y+1<=n&&!vis[x][y+1]) {//������
			cout<<' '<<map[x][++y],vis[x][y] = ++cnt;
		}
		while(x-1>=1&&!vis[x-1][y]) {//Ȼ������
			cout<<' '<<map[--x][y],vis[x][y] = ++cnt;
		}
		while(y-1>=1&&!vis[x][y-1]) {//�������
			cout<<' '<<map[x][--y],vis[x][y] = ++cnt;
		}
	}
	return 0;
}
