#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	string s;
	char op;
	getline(cin,s);
	cin>>op;
	for(int i = 0;i < s.size();i++) {
		if(s[i]==op) continue;
		cout<<s[i];
	}
	return 0;
}
