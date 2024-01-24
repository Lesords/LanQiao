#include<iostream>//ac
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		if(n%i==0)//输出所有因子
			cout<<i<<" * "<<n/i<<" = "<<n<<endl;
	}
	return 0;
}
