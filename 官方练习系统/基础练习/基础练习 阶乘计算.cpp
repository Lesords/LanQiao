#include<iostream>//ac
using namespace std;
const int MAXN = 3e3+5;
int a[MAXN],pos;
void multi(int n) {//�����׳�
	int rest = 0;
	for(int i = 1;i < MAXN;i++) {
		a[i] = a[i]*n+rest;
		rest = a[i]/10;
		a[i] %= 10;
	}
}
int main() {
	a[1] = 1;//��ʼ��
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) multi(i);//��λ��
	for(int i = MAXN-1;i >= 1;i--) if(a[i]) {//�����λ
		pos = i;break;
	}
	for(int i = pos;i >= 1;i--) cout<<a[i];
	return 0;
}
