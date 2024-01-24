#include<iostream>//ac
#include<string>
#include<set>
using namespace std;
int main() {
	string s;
	set<char> set;
	char op[5] = {'a','e','i','o','u'};
	for(int i = 0;i < 5;i++) set.insert(op[i]);//元音集合
	int ans = 0;//初始化为0（即没有元音）
	cin>>s;
	for(int i = 0;i < s.size();i++) {
		if(set.count(s[i])) {//若为元音
			ans = i+1;break;//字符位置是从1开始的
		}
	}
	cout<<ans;
	return 0;
}
