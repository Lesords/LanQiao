#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	string ans = "";//初始化为空字符串
	for(int i = 0;i < s.size();i++) {//全部遍历一遍
		if(s[i]>='0'&&s[i]<='9') {//若为数字，则拼接前一个字符 tmp-1 次
			int tmp = s[i]-'0';
			for(int j = 2;j <= tmp;j++) ans += s[i-1];
		}
		else ans += s[i];//否则直接添加即可
	}
	cout<<ans;
	return 0;
}
