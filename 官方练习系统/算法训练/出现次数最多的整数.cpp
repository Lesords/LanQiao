#include<iostream>//ac
#include<algorithm>
#include<map>
using namespace std;
struct node {
	int val,num;
	friend bool operator < (node a,node b) {
		if(a.num==b.num) return a.val<b.val;
		return a.num > b.num;
	}
}a[100];
int main() {
	int n,pos = 1,tmp;
	map<int,int> m;//保存对应数的下标
	cin>>n;
	if(n<=0) return 0;//有负数情况
	for(int i = 1;i <= n;i++) {
		cin>>tmp;
		if(m[tmp]==0) {//第一次出现
			m[tmp] = pos;//保存下标
			a[pos].val = tmp;//对应值
			a[pos].num = 1;//对应数量
			pos++;
		}
		a[m[tmp]].num++;//数量增加
	}
	sort(a+1,a+pos);
	cout<<a[1].val;
	return 0;
}
