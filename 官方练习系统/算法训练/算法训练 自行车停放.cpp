#include<iostream>//ac
using namespace std;
const int MAXN = 1e5 + 5;
int leftt[MAXN],rightt[MAXN];
int main() {
	int n,first,op,x,y;
	cin>>n>>first;//firstΪ���
	for(int i = 1;i < n;i++) {
		cin>>x>>y>>op;
		if(op) {//x����y���ұ�
		    int rr = rightt[y];
		    rightt[y] = x;
		    leftt[rr] = x;
		    leftt[x] = y, rightt[x] = rr;
		}//x��Ϊ�������м�㣡����
		else {//x����y�����
			int tt = leftt[y];
			leftt[y] = x;
			rightt[tt] = x;
			leftt[x] = tt, rightt[x] = y;
			if(y==first) first = x;
		}
	}
	while(first) {
		cout<<first<<' ';
		first = rightt[first];//������
	}
	return 0;
}
