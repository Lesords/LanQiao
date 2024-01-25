#include<iostream>//ac
using namespace std;
int main() {
	int n,ans = 0,tmp;
	cin>>n;
	for(int i = 1;i <= n;i++) {//遍历所有数字
		tmp = i;
		while(tmp) {//直接判断是否有1
			if(tmp%10==1) ans++;
			tmp /= 10;
		}
	}
	cout<<ans<<endl;
	return 0;
}
