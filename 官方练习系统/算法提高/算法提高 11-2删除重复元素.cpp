#include<iostream>//ac
#include<string>
#include<map>
using namespace std;
int main() {
	string s;
	map<char,int> map;
	cin>>s;
	for(int i = 0;i < s.size();i++) map[s[i]]++;//记录数量
	for(int i = 0;i < s.size();i++) {
		if(map[s[i]]>1) continue;//跳过大于1的字符
		cout<<s[i];
	}
	return 0;
}
