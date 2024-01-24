#include<iostream>//ac
#include<cmath>
using namespace std;
int main() {
	int tmp,maxx = -2,x,y;//可能最大值为0
	for(int i = 1;i <= 3;i++) {
		for(int j = 1;j <= 4;j++) {
			cin>>tmp;
			if(abs(tmp)>maxx) {//相等的不需要更新！！！
				maxx = abs(tmp);//取绝对值！！！
				x = i,y = j;
			}
		}
	}
	cout<<maxx<<' '<<x<<' '<<y;
	return 0;
}
