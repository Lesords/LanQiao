#include<iostream>//ac
#include<algorithm>
using namespace std;
const int MAXN = 1005;
struct node{
	int math,eng,chi,num,sum;
	friend bool operator < (node a,node b) {
		if(a.sum!=b.sum) return a.sum > b.sum;
		if(a.math!=b.math) return a.math > b.math;
		if(a.eng!=b.eng) return a.eng > b.eng;
		return a.num < b.num;
	}
}a[MAXN];
int main() {
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>a[i].math>>a[i].eng>>a[i].chi;
		a[i].sum = a[i].math+a[i].eng+a[i].chi;
		a[i].num = i;
	}
	sort(a+1,a+1+n);
	for(int i = 1;i <= n;i++) {
		cout<<a[i].math<<' '<<a[i].eng<<' ';
		cout<<a[i].chi<<' '<<a[i].num<<'\n';
	}
	return 0;
}
