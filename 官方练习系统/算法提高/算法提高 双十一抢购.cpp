#include<iostream>//ac
#include<algorithm>
using namespace std;
struct node{
	double money,earn;//��ۻ���С��������
	int num;
	friend bool operator < (node a,node b) {
		//��ʡ����Ǯ��������
		if(a.earn!=b.earn) return a.earn > b.earn;
		else if(a.money!=b.money) return a.money < b.money;
		else return a.num < b.num;
	}
}a[1005];
int ans[1005];
int main() {
	int n,cnt = 0;
	double s;//���Ҳ������double������
	cin>>s>>n;
	for(int i = 1;i <= n;i++) {
		cin>>a[i].money>>a[i].earn;
		a[i].num = i;
		if(a[i].earn) {//�д���
			a[i].earn = a[i].money/2.0;
			a[i].money /= 2.0;
		}
	}
	sort(a+1,a+n+1);
	for(int i = 1;i <= n&&s;i++) {//s������Ҳ�˳�
		if(a[i].money<=s) {//����Ļ�
			ans[++cnt] = a[i].num;//��¼��Ӧ���
			s -= a[i].money;//�۳�����Ǯ
		}
	}
	if(!cnt) cout<<cnt<<endl;//ʲô������ֱ�����cnt
	else {
		sort(ans+1,ans+cnt+1);//����������
		for(int i = 1;i <= cnt;i++) {
			if(i!=1) cout<<' ';
			cout<<ans[i];
		}
	}
	return 0;
}
