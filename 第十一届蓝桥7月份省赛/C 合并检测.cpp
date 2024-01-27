#include<iostream>
#include<algorithm>
#define INF 0x3f3f3f3f
using namespace std;
int main() {
	int num = INF,ans = 0;
	for(int i = 1;i <= 100;i++) {
		int tmp = ceil(100.0/i)+i;//公式
		if(tmp<num) {//取小，并更新答案
			num = tmp,ans = i;
		}
	}
	cout<<"num:"<<num<<endl;
	cout<<"ans:"<<ans<<endl;//10
	return 0;
}
