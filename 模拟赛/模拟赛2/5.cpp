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
	int n,a,b,c,ans = 0;
	cin>>n>>a>>b>>c;
	for(int i = 1;i <= n;i++) {
		if(i%a==0||i%b==0||i%c==0) continue;
		ans++;
	}
	cout<<ans;
	return 0;
}
