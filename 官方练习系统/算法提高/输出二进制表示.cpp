#include<iostream>//ac
using namespace std;
int a[10],n;
int main() {
	cin>>n;
	for(int i = 8;i >= 1;i--) {//�ܹ�ֻ��8λ
		a[i] = n&1;
		n >>= 1;
	}
	for(int i = 1;i <= 8;i++) cout<<a[i];
	cout<<endl;
	return 0;
}
