#include<iostream>//ac
using namespace std;
bool judge(int n) {//�ж��Ƿ�������
	for(int i = 2;i*i <= n;i++) if(n%i==0) {
		return 0;
	}
	return 1;
}
int main() {
	int n;
	cin>>n;
	for(int i = 2;i <= n;i++) {
		if(n%i==0&&judge(i)) cout<<i<<' ';
	}
	return 0;
}
