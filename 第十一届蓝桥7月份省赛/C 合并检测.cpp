#include<iostream>
#include<algorithm>
#define INF 0x3f3f3f3f
using namespace std;
int main() {
	int num = INF,ans = 0;
	for(int i = 1;i <= 100;i++) {
		int tmp = ceil(100.0/i)+i;//��ʽ
		if(tmp<num) {//ȡС�������´�
			num = tmp,ans = i;
		}
	}
	cout<<"num:"<<num<<endl;
	cout<<"ans:"<<ans<<endl;//10
	return 0;
}
