#include<iostream>//ac
using namespace std;
const int MAXN = 35;
int a[MAXN][MAXN],tmp[MAXN][MAXN],op[MAXN][MAXN],n,m;
void multi() {//矩阵乘法
	for(int i = 1;i <= n;i++)//操作数组为a的当前值
		for(int j = 1;j <= n;j++) op[i][j] = a[i][j];
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= n;j++) {
			a[i][j] = 0;
			for(int k = 1;k <= n;k++)//计算的时候不会被干扰
				a[i][j] += op[i][k]*tmp[k][j];
		}
	}
}
int main() {
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= n;j++) {
			cin>>a[i][j],tmp[i][j]=a[i][j];
			//0次幂的时候为单位矩阵
			if(m==0) a[i][j] = i==j?1:0;
		}
	//非零次幂才需要计算
	if(m) for(int i = 1;i < m;i++) multi();//矩阵乘 m-1 次！！！
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= n;j++) {
			if(j!=1) cout<<' ';
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
