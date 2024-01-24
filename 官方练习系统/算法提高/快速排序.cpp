#include<iostream>//ac
#include<algorithm>
using namespace std;
int a[1005];
int main() {
	int pos = 1;
	while(1) {
		cin>>a[pos];
		if(a[pos]==0) break;
		pos++;
	}
	sort(a+1,a+pos);
	for(int i = 1;i < pos;i++) {
		if(i!=1) cout<<' ';
		cout<<a[i];
	}
	return 0;
}
