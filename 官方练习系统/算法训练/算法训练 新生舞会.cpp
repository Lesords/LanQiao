#include<iostream>//ac
#include<string>
#include<map>
using namespace std;
int main() {
	map<string,char> male;
	int n,m;
	string name,age;
	char sex;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>name>>age>>sex;
		male[name] = male[age] = sex;//通过名字和学号设置性别
	}
	cin>>m;
	while(m--) {
		cin>>name>>age;//输入两个字符串，判断可否可以共舞
		if(male[name]!=male[age]) cout<<"Y\n";//性别不同可共舞
		else cout<<"N\n";
	}
	return 0;
}
