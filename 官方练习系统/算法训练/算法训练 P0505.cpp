#include<iostream>//ac
using namespace std;
const int MAXN = 2e2+5;
int a[MAXN] = {0,1};
void multi(int n) {//�����׳�
	int rest = 0;//��λ��
	for(int i = 1;i < MAXN;i++) {
		a[i] = a[i]*n+rest;//��ǰλ���
		rest = a[i]/10;//��λ��
		a[i] %= 10;//%10
	}
}
int main() {
	int n,ans;
	cin>>n;
	for(int i = 1;i <= n;i++) multi(i);
	for(int i = 1;i < MAXN;i++) if(a[i]) {
		ans = a[i];break;//�ҵ���0��
	}
	cout<<ans;
	return 0;
}
