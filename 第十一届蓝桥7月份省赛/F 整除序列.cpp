#include<iostream>//ac
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
vector<ll> v;
int main() {
	ll n;
	cin>>n;
	while(n) {
		v.push_back(n);//装入结果
		n /= 2;
	}
	for(int i = 0;i < v.size();i++) {//统一输出
		if(i!=0) cout<<" ";
		cout<<v[i];
	}
	return 0;
}
