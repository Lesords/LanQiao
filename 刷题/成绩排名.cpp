#include<iostream>//ac
#include<algorithm>
using namespace std;
const int MAXN = 105;
struct node {
	string name;
	int score;
	friend bool operator < (node a,node b) {
		if(a.score!=b.score) return a.score > b.score;
		return a.name < b.name;
	}
}a[MAXN];
int main() {
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) cin>>a[i].name>>a[i].score;
	sort(a+1,a+n+1);
	for(int i = 1;i <= n;i++) cout<<a[i].name<<endl;
	return 0;
}
