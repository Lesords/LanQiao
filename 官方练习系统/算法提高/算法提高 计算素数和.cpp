#include<iostream>//ac
using namespace std;
bool judge(int n) {//�ж��Ƿ�Ϊ����
	for(int i = 2;i*i <= n;i++) if(n%i==0) {
		return 0;
	}
	return 1;//1Ϊ����
}
int main() {
	int n,ans = 0;
	cin>>n;
	for(int i = 2;i <= n;i++) {
		if(judge(i)) ans += i;//ֻ������
	}
	cout<<ans;
	return 0;
}
