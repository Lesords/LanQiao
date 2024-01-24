#include<iostream>//ac
using namespace std;
const int MAXN = 1e5 + 5;
int leftt[MAXN],rightt[MAXN];
int main() {
	int n,first,op,x,y;
	cin>>n>>first;//first为起点
	for(int i = 1;i < n;i++) {
		cin>>x>>y>>op;
		if(op) {//x放在y的右边
		    int rr = rightt[y];
		    rightt[y] = x;
		    leftt[rr] = x;
		    leftt[x] = y, rightt[x] = rr;
		}//x都为操作的中间点！！！
		else {//x放在y的左边
			int tt = leftt[y];
			leftt[y] = x;
			rightt[tt] = x;
			leftt[x] = tt, rightt[x] = y;
			if(y==first) first = x;
		}
	}
	while(first) {
		cout<<first<<' ';
		first = rightt[first];//向右移
	}
	return 0;
}
