#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
const int MAXN = 1e5+5;
int num[11][MAXN],a[MAXN];//a����ԭ����
//num[i][j]ʵʱ���µ�ǰλ��ǰ����i��0��ģk��ֵΪj������
//Ҳ����������¼ ��λģkֵΪj ������
int get_len(int n) {//����n�ĳ���
	int ans = 0;
	while(n) n/=10,ans++;
	return ans;
}
int main() {
	int n,k;
	cin>>n>>k;
	for(int i = 1;i <= n;i++) cin>>a[i];
	ll ans = 0;
	//��ǰ�������������ǰ������ ��λ
	for(int i = 1;i <= n;i++) {
		int len = get_len(a[i]);//���㵱ǰ���ĳ���
		int two = (k-a[i]%k)%k;//�����λ��ģ���
		ans += num[len][two];//�����뵱ǰ��ƴ�ӵĸ�λ��
		int tmp = 10;//��ǰ���������������λ��������
		for(int j = 1;j <= 10;j++) {//����10λ
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
