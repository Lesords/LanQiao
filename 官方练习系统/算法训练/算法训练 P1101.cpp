#include<iostream>//ac
#include<cstdio>
#include<string>
using namespace std;
int main() {
	int n;
	double ans = 0,money,num;
	string name;
	cin>>n;
	while(n--) {//nameֻ�������ʽ��û��ʵ������
		cin>>name>>money>>num;
		ans += money*num;
	}
	printf("%.6f",ans);//����6λС��
	return 0;
}
