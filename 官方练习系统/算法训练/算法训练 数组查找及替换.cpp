#include<iostream>//ac
#include<algorithm>
using namespace std;
int a[105];
int main() {
	int n,m,cnt = 1,tmp;
	cin>>n>>m;
	for(int i = 1;i <= n;i++) {
		cin>>tmp;
		if(tmp%m==0) continue;//��������������
		a[cnt++] = tmp;
	}
	sort(a+1,a+cnt);//������
	for(int i = 1;i < cnt;i++) {
		if(i!=1) cout<<' ';//��Ϊ�ַ����������Ӧ�ַ�
		if(a[i]>='A'&&a[i]<='Z') cout<<char(a[i]);
		else cout<<a[i];
	}
	return 0;
}
