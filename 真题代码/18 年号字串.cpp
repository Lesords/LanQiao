#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
int main() {
	int n = 2019;
	while(n) {
		int tmp = n%26;
		v.push_back(tmp);
		n /= 26;
	}
	reverse(v.begin(),v.end());
	for(int i = 0;i < v.size();i++) {
		char ch = v[i]+'A'-1;
		cout<<ch;
	}//BYQ
	return 0;
}
