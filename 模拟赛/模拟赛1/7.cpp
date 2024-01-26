#include<iostream>
using namespace std;
const int MAXN = 1005;
int a[MAXN],n;
int solve(int mid) {
	int flag = 0;
	for(int i = mid-1;i >= 1;i--) if(a[i]<a[mid]) {
		flag++;break;
	}
	if(flag==0) return 0;
	for(int i = mid+1;i <= n;i++) if(a[i]>a[mid]) {
		flag++;break;
	}
	return (flag==2)?1:0;
}
int main() {
	int ans = 0;
	cin>>n;
	for(int i = 1;i <= n;i++) cin>>a[i];
	for(int i = 2;i+1 <= n;i++) {
		ans += solve(i);
	}
	cout<<ans<<endl;
	return 0;
}
