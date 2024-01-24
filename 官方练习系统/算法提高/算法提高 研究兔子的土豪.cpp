#include<iostream>//ac  (矩阵快速幂)
#define ll long long
using namespace std;
const int mod = 1007;
struct Matrix{
	int f[2][2];
};
Matrix multi(Matrix a,Matrix b) {//可以返回一个矩阵
	Matrix ans;
	for(int i = 0;i < 2;i++) {
		for(int j = 0;j < 2;j++) {
			ans.f[i][j] = 0;
			for(int k = 0;k < 2;k++) {
				ans.f[i][j] += a.f[i][k]*b.f[k][j]%mod;
			}
			ans.f[i][j] %= mod;
		}
	}
	return ans;
}
int main() {
	ll n;
	cin>>n;
	Matrix ans,tmp;
	tmp.f[0][0] = tmp.f[0][1] = tmp.f[1][0] = 1;
	tmp.f[1][1] = 0;
	ans.f[0][1] = ans.f[1][1] = 1;
	ans.f[0][0] = ans.f[1][0] = 1;
	n -= 2;//从第三项才需要运算
	while(n>=1) {//矩阵快速幂
		if(n&1) ans = multi(tmp,ans);
		tmp = multi(tmp,tmp);
		n >>= 1;
	}
	cout<<(ans.f[0][0])%mod;
	return 0;
}
