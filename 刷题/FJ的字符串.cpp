#include<iostream>//ac
#include<string>
using namespace std;
int main() {
	int n;
	string ans = "A";
	cin>>n;
	for(int i = 2;i <= n;i++) {
		char tmp = i +'A'-1;//中间是添加字符
		ans = ans+tmp+ans;//首尾一致
	}//首尾一致，中间添加目的字符
	cout<<ans<<endl;
	return 0;
}
