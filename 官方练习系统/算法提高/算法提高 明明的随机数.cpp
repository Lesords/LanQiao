#include<iostream>//ac
#include<algorithm>
using namespace std;
int a[105];
int main() {
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int cnt = unique(a+1,a+1+n)-a;
	cout<<cnt-1<<endl;//�����1��ʼ��¼�ģ�����
	for(int i = 1;i < cnt;i++) {//������cnt
		if(i!=1) cout<<' ';
		cout<<a[i];
	}
	return 0;
}
