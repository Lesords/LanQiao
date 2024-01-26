#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const int MAXN = 1e5+5;
char a[10] = "LANQIAO";
int book[10];
set<string> s;
string tmp = "-------";
void dfs(int pos) {//2520
	if(pos==7) {
		cout<<tmp<<endl;
		s.insert(tmp);
		return;
	}
	for(int i = 0;i <= 6;i++) {
		if(book[i]) continue;
		book[i] = 1;
		tmp[pos] = a[i];
		dfs(pos+1);
		book[i] = 0;
	}
}
int main() {
	dfs(0);
	cout<<s.size();
	return 0;
}
