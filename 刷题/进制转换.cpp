#include<iostream>//ac
using namespace std;
void solve(int n) {
	cout<<'0';//ǰ��0
	if(n==0) return;//����0
	int ans = 0,pos = 1;//posΪλ��
	while(n) {
		ans = n%8*pos + ans;
		pos *= 10;//����
		n /= 8;
	}
	cout<<ans<<endl;
}
int main() {
	int n;
	cin>>n;
	solve(n);
	return 0;
}
