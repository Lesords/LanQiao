#include<iostream>//ac
using namespace std;
int changeinfo(int info) {//ֻ��Ҫ�ύ�����ڵļ���
	int ans = 0;
	while(info) {//������
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
