#include<iostream>//ac
using namespace std;
const int MAXN = 1e5+5;
const int MOD = 5e4;
int vis[MAXN],prime[MAXN];
int main() {
	int cnt = 1;
	for(int i = 2;i < MAXN;i++) {//��ʽɸ
		if(vis[i]) continue;
		prime[cnt++] = i;//��������
		for(int j = i+i;j < MAXN;j+=i) {
			vis[j] = 1;
		}
	}
	int n,ans = 1;
	cin>>n;//����ǰn���ĳ˻�
	for(int i = 1;i <= n;i++) ans = ans*prime[i]%MOD;
	cout<<ans<<endl;
	return 0;
}
