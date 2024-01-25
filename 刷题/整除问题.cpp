#include<iostream>//ac
using namespace std;
int main() {
	int minn,maxx,factor;
	cin>>minn>>maxx>>factor;
	for(int i = minn;i <= maxx;i++) {
		if(i%factor==0) cout<<i<<' ';
	}
	return 0;
}
