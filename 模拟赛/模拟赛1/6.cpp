#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
	string s;
	set<char> a = {'a','e','i','o','u'};
	cin>>s;
	if(s.size()<4||a.count(s[0])) {
		cout<<"no"<<endl;return 0;
	}
	while(s.size()&&a.count(s[0])!=1) s.erase(0,1);
	
	if(s.size()<3||a.count(s[0])==0) {
		cout<<"no"<<endl;return 0;
	}
	while(s.size()&&a.count(s[0])!=0) s.erase(0,1);
	
	if(s.size()<2||a.count(s[0])) {
		cout<<"no"<<endl;return 0;
	}
	while(s.size()&&a.count(s[0])!=1) s.erase(0,1);
	
	if(s.size()<1||a.count(s[0])==0) {
		cout<<"no"<<endl;return 0;
	}
	while(s.size()&&a.count(s[0])==1) s.erase(0,1);
	if(s.size()==0) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
