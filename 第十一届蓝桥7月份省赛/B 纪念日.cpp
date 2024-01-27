#include<iostream>
using namespace std;
int solve(int year) {//判断闰年和平年
	if(year%400==0||(year%4==0&&year%100)) return 366;
	return 365;
}
int main() {
	int tim = 0;
	//一年365和366的区别在于2月，所以从1922年开始遍历
	for(int i = 1922;i <= 2020;i++) tim += solve(i);
	tim -= 22;
	cout<<tim*24*60<<endl;
	return 0;
}
