#include<iostream>//ac
#include<string>
#include<set>
using namespace std;
int main() {
	set<char> s;//c98 不支持直接定义
	char tmp[7] = {'a','e','i','o','u'};
	for(int i = 0;i <= 4;i++) s.insert(tmp[i]);
	string a;
	int flag = 0;
	cin>>a;
	for(int i = 0;i < a.size();i++) {
		if(s.count(a[i])) {
			flag = i+1;break;
		}
	}
	cout<<flag<<endl;
	return 0;
}
