#include<iostream>//ac
using namespace std;
const int MAXN = 205;
int a[MAXN][MAXN],b[MAXN][MAXN],tmp;
int main() {
	int m,s,n;
	cin>>m>>s>>n;
	for(int i = 1;i <= m;i++) {//m行s列
		for(int j = 1;j <= s;j++) cin>>a[i][j];
	}
	for(int i = 1;i <= s;i++) {//s行n列
		for(int j = 1;j <= n;j++) cin>>b[i][j];
	}
	for(int i = 1;i <= m;i++) {//行
		for(int j = 1;j <= n;j++) {//列
			if(j!=1) cout<<' ';
			tmp = 0;//计算对应的值
			for(int k = 1;k <= s;k++)
				tmp += a[i][k]*b[k][j];//行 * 列
			cout<<tmp;
		}
		cout<<endl;
	}
	return 0;
}
