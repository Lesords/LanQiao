#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,ss;
	cin>>s;
	cout<<s.size();
	cin>>ss;
	cout<<ss.size();
	int flag = 0;
	for(int i = 0;i < ss.size();i++) {
		if(s[i]!=ss[i]) {
			cout<<s[i]<<ss[i]<<endl;
			flag = 1;break;
		}
	}
	if(flag == 0) cout<<"yes";
	else cout<<"no";
	return 0;
}
