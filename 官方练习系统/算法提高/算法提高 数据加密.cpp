#include<iostream>//ac
using namespace std;
int changeinfo(int info) {//只需要提交函数内的即可
	int ans = 0;
	while(info) {//逆序求法
		ans = ans*10+(info%10+5)%10;
		info /= 10;
	}
	return ans;
}
int main() {
	int info;
	cin>>info;
	cout<<changeinfo(info);
	return 0;
}
