#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const int MAXN = 1e5+5;
int main() {
	string s;
	cin>>s;
	for(int i = 0;i < s.size();i++) {
		s[i] = (s[i]-'a'+3)%26+'a';
	}
	cout<<s;
	return 0;
}
