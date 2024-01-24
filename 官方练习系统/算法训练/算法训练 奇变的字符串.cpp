#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	string s,ans = "";
	cin>>s;
	for(int i = 0;i < s.size();i++) {
		if(i%2) ans += s[i];//保存所有奇数位置字符
	}
	int len = ans.size()-1;
	for(int i = 0,j = len;i < s.size();i++) {
		if(i%2) cout<<ans[j--];//奇数位置倒序输出
		else cout<<s[i];//偶数不变
	}
	return 0;
}
