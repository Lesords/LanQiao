#include<iostream>
using namespace std;
int solve(int year) {//�ж������ƽ��
	if(year%400==0||(year%4==0&&year%100)) return 366;
	return 365;
}
int main() {
	int tim = 0;
	//һ��365��366����������2�£����Դ�1922�꿪ʼ����
	for(int i = 1922;i <= 2020;i++) tim += solve(i);
	tim -= 22;
	cout<<tim*24*60<<endl;
	return 0;
}
