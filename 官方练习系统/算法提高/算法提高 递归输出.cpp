#include<iostream>//ac
#include<string>
using namespace std;
void solve(string n) {
	if(n.size()==0) return;//为空时结束
	cout<<n[0]<<'-';//输出第一位及 '-'
	n.erase(0,1);//删除第一位符号
	solve(n);
}
int main() {
	string n;
	cin>>n;
	solve(n);
	return 0;
}
