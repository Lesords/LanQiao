#include<iostream>//ac
using namespace std;
int a[15],ans = -1,val;
int main() {
	for(int i = 0;i < 10;i++) cin>>a[i];
	cin>>val;
	int l = 0,r = 9,mid;
	while(l<=r) {
		mid = (l+r)>>1;
		if(a[mid]>val) r = mid-1;
		if(a[mid]<val) l = mid+1;
		if(a[mid]==val) {
			ans = mid;break;
		}
	}
	cout<<ans<<endl;
	return 0;
}

/* 答案提交部分
	int mid,ans = -1;
    while(first<=last) {
    	mid = (first+last)>>1;
    	if(sorted_array[mid]>key) last = mid - 1;
    	if(sorted_array[mid]<key) first = mid + 1;
    	if(sorted_array[mid]==key) {
    		ans = mid;break;
    	}
    }
    return ans;
*/
