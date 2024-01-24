#include<iostream>//ac
#include<string>
using namespace std;
string judge(string s) {
	string ans = "";
	for(int i = s.size()-1;i >= 0;i--) ans += s[i];
	return ans;
}
int main() {
	string s;
	cin>>s;
	if(judge(s)==s) cout<<"yes!";
	else cout<<"no!";
	return 0;
}
