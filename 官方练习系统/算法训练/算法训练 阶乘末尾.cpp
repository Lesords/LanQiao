#include<iostream>//ac
using namespace std;
const int MAXN = 55;
int a[MAXN] = {0,1};//��ʼ�� a[1] = 1
void multi(int n) {//�����׳�
	int rest = 0;
	for(int i = 1;i < MAXN;i++) {
		a[i] = a[i]*n+rest;
		rest = a[i]/10;
		a[i] %= 10;
	}
}
int main(){
	int n,len,pos;
	cin>>n>>len;
	for(int i = 1;i <= n;i++) multi(i);
	for(int i = len;i >= 1;i--) cout<<a[i];//ֻ���lenλ
	return 0;
}
