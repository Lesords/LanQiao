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
 * ��ֻ�������ڵĲ���
    int ans = 1;
    while(--n) ans = (ans+1)*2;
	return ans;
*/
