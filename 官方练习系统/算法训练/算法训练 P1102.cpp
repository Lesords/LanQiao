#include<iostream>//ac
#include<algorithm>
using namespace std;
struct node {
	string name,sex;
	int age,score,num;
	friend bool operator < (node a,node b) {
		//ÏÈ³É¼¨ºóË³Ðò
		if(a.score!=b.score) return a.score < b.score;
		else return a.num < b.num;
	}
}a[1005];
int main() {
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>a[i].name>>a[i].sex>>a[i].age>>a[i].score;
		a[i].num = i;
	}
	sort(a+1,a+1+n);
	for(int i = 1;i <= n;i++) {
		cout<<a[i].name<<' '<<a[i].sex<<' '<<a[i].age<<' '<<a[i].score<<'\n';
	}
	return 0;
}
