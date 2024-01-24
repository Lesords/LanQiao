#include<iostream>//ac
#include<algorithm>
using namespace std;
int ans[6],a[6];
int main() {
	for(int i = 1;i <= 4;i++) cin>>a[i];
	//按顺序一个个判断即可
	ans[1] = min(min(a[1]/2,a[4]/2),a[2]);
	a[1] -= ans[1]*2, a[4] -= ans[1]*2;
	a[2] -= ans[1];
	
	ans[2] = min(min(a[1],a[2]),min(a[3],a[4]));
	for(int i = 1;i <= 4;i++) a[i] -= ans[2];
	
	ans[3] = min(a[3]/2,a[4]);
	a[3] -= ans[3]*2,a[4] -= ans[3];
	
	ans[4] = a[2]/3;
	
	ans[5] = min(a[1],a[4]);
	for(int i = 1;i <= 5;i++) cout<<ans[i]<<endl;
	return 0;
}
