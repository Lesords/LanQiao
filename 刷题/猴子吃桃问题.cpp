#include<iostream>//ac
using namespace std;
int main() {
	int n,ans = 1;
	cin>>n;
	while(--n) ans = (ans+1)*2;
	cout<<ans<<endl;
	return 0;
}
/*
 * 答案只交函数内的部分
    int ans = 1;
    while(--n) ans = (ans+1)*2;
	return ans;
*/
