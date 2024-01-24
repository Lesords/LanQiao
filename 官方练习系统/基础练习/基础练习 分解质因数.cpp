#include<iostream>//ac
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	for(int i = a;i <= b;i++) {//从a到b
		int cnt = 1,n = i;//临时变量每次都需要初始化
		cout<<n<<'=';
		for(int j = 2;j <= n;j++) {
			while(n%j==0) {
				if(cnt!=1) cout<<'*';//第一个不输出*
				cout<<j,cnt++;
				n /= j;
			}
		}
		cout<<endl;//换行
	}
	return 0;
}
