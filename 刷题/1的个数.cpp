#include<iostream>//ac
using namespace std;
int main() {
	int n,ans = 0,tmp;
	cin>>n;
	for(int i = 1;i <= n;i++) {//������������
		tmp = i;
		while(tmp) {//ֱ���ж��Ƿ���1
			if(tmp%10==1) ans++;
			tmp /= 10;
		}
	}
	cout<<ans<<endl;
	return 0;
}
