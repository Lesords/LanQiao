#include<iostream>//ac
using namespace std;
int alpha(int n) {//�󰢶����˻�
	int ans = 1;
	while(n) {//ans ����һ����Ϊ0����
		if(n%10) ans *= n%10;
		n /= 10;
	}
	return ans;
}
int main() {
	int n;
	cin>>n;	//ֻҪ��Ϊ������һֱ��
	while(n>10) n = alpha(n);
	cout<<n<<endl;
	return 0;
}
