#include<iostream>//ac
using namespace std;
bool judge(int n) {
	for(int i = 2;i*i <= n;i++) if(n%i==0) {
		return 0;
	}
	return 1;
}
int main() {
	int n;
	cin>>n;
	cout<<(judge(n)?"yes":"no");
	return 0;
}
