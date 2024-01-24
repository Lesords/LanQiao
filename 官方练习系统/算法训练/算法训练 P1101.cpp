#include<iostream>//ac
#include<cstdio>
#include<string>
using namespace std;
int main() {
	int n;
	double ans = 0,money,num;
	string name;
	cin>>n;
	while(n--) {//name只是输入格式，没有实际作用
		cin>>name>>money>>num;
		ans += money*num;
	}
	printf("%.6f",ans);//保留6位小数
	return 0;
}
