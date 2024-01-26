#include<iostream>
using namespace std;
int main() {
	int n = 2019,ans = 0;
	for(int i = n;i >= 1;i--) {
		if(i*2>n&&i*2+1>n) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
