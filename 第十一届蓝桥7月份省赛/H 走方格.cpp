#include<iostream>//ac
#include<algorithm>
using namespace std;

//题解：dp计算方案数
//由于第一列只有 由上向下走 一种方案
//第一行只有 由左向右走 一种方案，所以可以先初始化第一行和第一列
//然后计算剩余位置，特判全为偶数的位置即可

int dp[35][35];
int main() {
	int n, m;
	cin>>n>>m;
	for(int i = 1;i <= m;i++) dp[1][i] = 1;//初始化第一行为1
	for(int i = 1;i <= n;i++) dp[i][1] = 1;//初始化第一列为1
	for(int i = 2;i <= n;i++) {
		for(int j = 2;j <= m;j++) {
			if(i%2==0&&j%2==0) continue;//跳过全为偶数的位置
			dp[i][j] = dp[i-1][j] +dp[i][j-1];//上和左两个方向来的
		}
	}
	cout<<dp[n][m];
	return 0;
}
