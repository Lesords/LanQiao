#include<iostream>//ac
#include<queue>
using namespace std;
struct node{
	int val;
	friend bool operator < (node a,node b) {
		return a.val > b.val;//小的先出
	}
};
int main() {
	priority_queue<node> q;
	node tri1,tri2,tmp;
	int ans = 0,n;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>tri1.val;
		q.push(tri1);
	}
	if(n==1) {//只有一个时
		cout<<q.top().val<<endl;
		return 0;
	}
	while(!q.empty()) {
		tri1 = q.top();
		q.pop();
		tri2 = q.top();
		q.pop();
		tmp.val = tri1.val + tri2.val;
		ans += tmp.val;
		if(q.size()) {//还有数值时再放入队列
			q.push(tmp);
		}
	}
	cout<<ans<<endl;
	return 0;
}
