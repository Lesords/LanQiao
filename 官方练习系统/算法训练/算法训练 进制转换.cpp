#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	string s;
	int ans = 0;
	cin>>s;
	for(int i = s.size()-1,j = 1;i >= 0;i--,j*=2) {
		if(s[i]=='1') ans += j;
	}
	cout<<ans;
	return 0;
}
