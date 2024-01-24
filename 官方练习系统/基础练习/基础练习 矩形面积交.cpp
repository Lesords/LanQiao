#include<iostream>//ac
#include<cstdio>
#include<algorithm>
using namespace std;

//题解：两个矩形的相交面积：(第三长-第二长)*(第三宽-第二宽)

//判断两个矩阵是否相交的方法
//是判断 前两个 的宽和长是否为一个矩形
//或者是判断 后两个 的宽和长是否为一个矩形

struct node{
	double val;
	int num;//标记为第几个矩形
	friend bool operator < (node a,node b) {
		return a.val < b.val;//升序
	}
}x[5],y[5];
int main() {
	for(int i = 1;i <= 2;i++) {
		cin>>x[i].val>>y[i].val;
		x[i].num = y[i].num = 1;//标记矩形号
	}
	for(int i = 3;i <= 4;i++) {
		cin>>x[i].val>>y[i].val;
		x[i].num = y[i].num = 2;//标记矩形号
	}
	sort(x+1,x+5);
	sort(y+1,y+5);
	if(x[2].num!=x[1].num&&y[2].num!=y[1].num) //巧妙！！！
		printf("%.2f",(x[3].val-x[2].val)*(y[3].val-y[2].val));
	else cout<<"0.00";
	return 0;
}
