#include<iostream>//ac
using namespace std;
int judge(int n) {
	if(n==1) return 0;//1Ϊ0
	int ans = 1;
	for(int i = 2;i*i <= n;i++) {//�����Ƿ���ͬ
		if(n%i==0) ans += (n/i==i?i:(n/i+i));
	}
	return ans;//���Ӻ�
}
int main() {
	for(int i = 1;i <= 9999;i++) {
		if(i==judge(i)) cout<<i<<endl;
	}
	return 0;
}
