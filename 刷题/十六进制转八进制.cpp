#include<iostream>//ac
#include<string>
using namespace std;
string to_four(int a) {
	string ans = "";
	while(a) {
		if(a&1) ans = '1' + ans;
		else ans = '0' + ans;
		a >>= 1;
	}
	while(ans.size() < 4) ans = '0' + ans;
	return ans;
}
string to_binal(string a) {
	string ans = "";
	for(int i = 0;i < a.size();i++) {
		int tmp;
		if(a[i]>='0'&&a[i]<='9') tmp = a[i] - '0';
		else tmp = a[i] - 'A' + 10;
		ans += to_four(tmp);
	}
	while(ans[0]=='0'&&ans.size()%3!=0) ans.erase(0,1);
	while(ans.size()%3!=0) ans = '0' + ans;//!!!
	return ans;
}
char to_decimal(string a) {
	int ans = 0;
	for(int i = 0;i < a.size();i++) {
		int tmp = a[i] - '0';
		if(i == a.size() - 1) {
			ans += tmp;break;
		}
		ans = (ans + tmp) * 2;
	}
	return ans + '0';
}
string to_oct(string a) {
	string ans = "";
	for(int i = 0;i < a.size();i += 3) {
		string tmp;
		tmp = a[i];
		tmp += a[i+1];
		tmp += a[i+2];
		ans += to_decimal(tmp);
	}
	while(ans[0] == '0'&&ans.size()!=1) ans.erase(0,1);
	return ans;
}
int main() {
	int t;
	cin>>t;
	string s;
	while(t--) {
		cin>>s;
		cout<<to_oct(to_binal(s))<<endl;
	}
	return 0;
}
