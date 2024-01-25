#include<iostream>//ac
#define t(x) ((x)*(x)*(x))
using namespace std;
int judge(int n) {
	return t(n%10)+t(n/10%10)+t(n/100);
}
int main() {
	for(int i = 100;i <= 999;i++) {
		if(i==judge(i)) cout<<i<<endl;
	}
	return 0;
}
