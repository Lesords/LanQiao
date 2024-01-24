#include<iostream>//ac
using namespace std;
int fast(int a,int b) {//¿ìËÙ³Ë
	int ans = 0;
	while(b) {
		if(b&1) ans += a;
		a *= 2;
		b >>= 1;
	}
	return ans;
}
int main() {
	int x,y;
	cin>>x>>y;
	cout<<fast(x,y);
	return 0;
}
