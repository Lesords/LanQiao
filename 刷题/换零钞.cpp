#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int ans = 99999;
	for(int i = 1;i <= 30;i++) {
		if(i*3>200) break;
		for(int j = 1;j <= 40;j++) {
			if(i+i*20+j*5>200) break;
			if(i+i*20+j*5==200) {
				ans = min(ans,11*i+j);
			}
		}
	}
	cout<<ans<<endl;//74
	return 0;
}
