#include<iostream>//ac
#include<cmath>
using namespace std;
const int MAXN = 1005;
int a[MAXN];
int main() {
	int n,ans = 0;
	cin>>n;
	for(int i = 1;i <= n;i++) cin>>a[i];
	for(int i = 1;i <= n;i++)//�����������ж��Ƿ��в�ֵΪ1��
		for(int j = i+1;j <= n;j++)
			if(abs(a[i]-a[j])==1) ans++;
	cout<<ans;
	return 0;
}
