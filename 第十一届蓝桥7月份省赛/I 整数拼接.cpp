#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
const int MAXN = 1e5+5;
int num[11][MAXN],a[MAXN];//a保存原数据
//num[i][j]实时更新当前位置前，补i个0后模k的值为j的数量
//也就是用来记录 高位模k值为j 的数量
int get_len(int n) {//计算n的长度
	int ans = 0;
	while(n) n/=10,ans++;
	return ans;
}
int main() {
	int n,k;
	cin>>n>>k;
	for(int i = 1;i <= n;i++) cin>>a[i];
	ll ans = 0;
	//从前到后遍历，将当前的数做 低位
	for(int i = 1;i <= n;i++) {
		int len = get_len(a[i]);//计算当前数的长度
		int two = (k-a[i]%k)%k;//计算高位的模结果
		ans += num[len][two];//可以与当前数拼接的高位数
		int tmp = 10;//当前数给后面的数当高位数！！！
		for(int j = 1;j <= 10;j++) {//共有10位
			num[j][1LL*tmp*a[i]%k]++;
			tmp *= 10;
		}
	}
	memset(num,0,sizeof(num));
	for(int i = n;i >= 1;i--) {
		int len = get_len(a[i]);
		int two = (k-a[i]%k)%k;
		ans += num[len][two];
		int tmp = 10;
		for(int j = 1;j <= 10;j++) {
			num[j][1LL*tmp*a[j]%k]++;
			tmp *= 10;
		}
	}
	cout<<ans<<endl;
	return 0;
}
