#include<iostream>
using namespace std;
const int mod = 10000;
int main() {
	int a = 1,b = 1,c = 1,d = 0;
	for(int i = 4;i <= 20190324;i++) {
		d = (a+b+c)%10000;
		a = b%mod,b = c%mod,c = d%mod;
	}
	cout<<d%mod<<endl;//4659
	return 0;
}
