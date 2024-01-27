#include<iostream>
using namespace std;
bool judge(int n) {//判断数字中是否有2或4
	while(n) {
		int tmp = n%10;
		if(tmp==2||tmp==4) return 1;
		n /= 10;
	}
	return 0;
}
int main() {
	int n = 2019,ans = 0;
	for(int i = 1;i <= 2019;i++) {//直接升序分解，一定不会重复
		for(int j = i+1;j <= 2019;j++) {
			if(2019-i-j<=j) continue;//不能相同
			if(judge(i)||judge(j)||judge(2019-i-j)) continue;//跳过2和4
			ans++;
		}
	}
	cout<<ans<<endl;//40785
	return 0;
}
