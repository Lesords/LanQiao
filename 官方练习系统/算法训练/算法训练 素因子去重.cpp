#include<iostream>//ac
#define ll long long
using namespace std;
int main() {
	ll n,ans = 1;//���ݷ�ΧΪ1e12����int��
	cin>>n;
	for(ll i = 2;i <= n;i++) {//����������
		ll flag = 1;
		while(n%i==0) {//��Ϊ����
			flag = i;
			n /= i;//ȥ�����пɱ���������
		}
		ans *= flag;//����ֻ��Ҫ��1��
	}
	cout<<ans;
	return 0;
}
