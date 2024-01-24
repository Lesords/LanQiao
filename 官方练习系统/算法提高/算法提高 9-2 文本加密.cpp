#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i = 0;i < s.size();i++) {
		char tmp;
		if(s[i]=='z') tmp = 'A';//z和Z特殊处理
		else if(s[i]=='Z') tmp = 'a';
		else if(s[i]>='a'&&s[i]<'z') tmp = (s[i]-'a'+1)%26+'a';
		else if(s[i]>='A'&&s[i]<'Z') tmp = (s[i]-'A'+1)%26+'A';
		else continue;
		s[i] = tmp;
	}
	cout<<s<<endl;
	return 0;
}
