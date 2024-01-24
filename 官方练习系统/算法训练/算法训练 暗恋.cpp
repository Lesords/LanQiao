#include<iostream>//ac
#include<algorithm>
using namespace std;
const int MAXN = 205;
int n, m,ans,map[MAXN][MAXN],len = 1;
bool judge(int x,int y,int len) {//判断是否为纯色正方形
	if(x+len>n||y+len>m) return 0;//越界
	for(int i = x;i <= x+len;i++) {
		for(int j = y;j <= y+len;j++) {
			if(map[i][j]!=map[x][y]) return 0;
		}
	}
	return 1;
}
int main() {
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= m;j++) cin>>map[i][j];
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= m;j++) {
			while(judge(i,j,len)) {//如果为纯色正方形
				ans = len++;//更新ans，并且len++
			}
		}
	}
	cout<<(ans+1)*(ans+1)<<endl;//面积即为结果
	return 0;
}
