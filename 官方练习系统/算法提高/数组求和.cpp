#include<iostream>//ac
#include<algorithm>
using namespace std;
const int MAXN = 1005;
int a[MAXN],pre[MAXN];//ǰ׺��
int main() {
	int n,m,ans = 0;
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>a[i],pre[i] = pre[i-1]+a[i];
	for(int i = 1,j = m;i <= n;i++) {//�̶����Ϊm
		if(i<j) ans = max(ans,pre[j]-pre[i-1]);//i - j��ֵ
		else ans = max(ans,pre[n]-(pre[i-1]-pre[j]));//1-j + i-n
		j = j%n+1;//����nʱ����1��ʼ
	}
	cout<<ans<<endl;
	return 0;
}
