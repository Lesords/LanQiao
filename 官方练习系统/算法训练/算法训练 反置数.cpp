#include<iostream>//ac
using namespace std;
int reverse(int n) {//������
	int ans = 0;
	while(n) {//���Զ�����ĩβ0
		ans = ans*10 + n%10;
		n /= 10;
	}
	return ans;
}
int main() {
	int n,m;
	cin>>n>>m;
	cout<<reverse(reverse(n)+reverse(m));
	return 0;
}
