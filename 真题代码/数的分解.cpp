#include<iostream>
using namespace std;
bool judge(int n) {//�ж��������Ƿ���2��4
	while(n) {
		int tmp = n%10;
		if(tmp==2||tmp==4) return 1;
		n /= 10;
	}
	return 0;
}
int main() {
	int n = 2019,ans = 0;
	for(int i = 1;i <= 2019;i++) {//ֱ������ֽ⣬һ�������ظ�
		for(int j = i+1;j <= 2019;j++) {
			if(2019-i-j<=j) continue;//������ͬ
			if(judge(i)||judge(j)||judge(2019-i-j)) continue;//����2��4
			ans++;
		}
	}
	cout<<ans<<endl;//40785
	return 0;
}
