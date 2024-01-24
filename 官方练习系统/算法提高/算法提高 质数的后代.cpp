#include<iostream>//ac
using namespace std;
bool judge(int n) {
	if(n<=1) return 0;
	for(int i = 2;i*i <= n;i++) {
		if(n%i==0) return 0;
	}
	return 1;
}
int main() {
	int n,a;
	cin>>n;
	while(n--) {
		cin>>a;
		int flag = 1;
		for(int i = 2;i*i <= a;i++) {
			if(a%i==0&&judge(i)&&judge(a/i)) {
				flag = 0;break;
			}
		}
		cout<<(flag?"No\n":"Yes\n");
	}
	return 0;
}
