#include<iostream>//ac
using namespace std;
int main() {
	int l,r,ans = 0,tmp;
	cin>>l>>r;
	for(int i = l;i <= r;i++) {//遍历所有数
		tmp = i;
		while(tmp) {//位运算
			if(tmp&1) ans++;
			tmp >>= 1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
