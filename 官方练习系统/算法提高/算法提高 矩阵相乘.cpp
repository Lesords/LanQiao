#include<iostream>//ac
#include<cstdio>
#define ll long long
using namespace std;
const int MAXN = 1005;
ll a[MAXN][MAXN],b[MAXN][MAXN],c[MAXN][MAXN];
int main() {
	int ax,ay,bx,by;
	scanf("%d%d",&ax,&ay);
	for(int i = 1;i <= ax;i++)
		for(int j = 1;j <= ay;j++) scanf("%lld",&a[i][j]);
	scanf("%d%d",&bx,&by);
	for(int i = 1;i <= bx;i++)
		for(int j = 1;j <= by;j++) scanf("%lld",&b[i][j]);
	for(int i = 1;i <= ax;i++) {
		for(int j = 1;j <= by;j++) {//ax行by列
			for(int k = 1;k <= ay;k++)//ay次运算
				c[i][j] += a[i][k]*b[k][j];
			if(j!=1) printf(" ");
			printf("%lld",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
