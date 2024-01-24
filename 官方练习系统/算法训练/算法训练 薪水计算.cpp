#include<iostream>//ac
#include<cstdio>
using namespace std;
int main() {
	double time, money;
	cin>>time>>money;//只有三个时间区，逐个遍历即可
	if(time<=40) printf("%.2f",time*money);
	else if(time<=50) printf("%.2f",40*money+(time-40)*money*1.5);
	else printf("%.2f",40*money+10*money*1.5+(time-50)*money*2.0);
	return 0;
}
