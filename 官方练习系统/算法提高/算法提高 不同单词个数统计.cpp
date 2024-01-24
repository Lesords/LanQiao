#include<iostream>//ac
#include<string>
#include<set>
using namespace std;
int main() {
	string tmp;
	set<string> set;
	while(cin>>tmp) {
		set.insert(tmp);
	}
	cout<<set.size();
	return 0;
}
