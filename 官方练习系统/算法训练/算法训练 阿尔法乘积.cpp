#include<iostream>//ac
using namespace std;
int alpha(int n) {//求阿尔法乘积
	int ans = 1;
	while(n) {//ans 乘以一个不为0的数
		if(n%10) ans *= n%10;
		n /= 10;
	}
	return ans;
}
int main() {
	int n;
	cin>>n;	//只要不为个数就一直乘
	while(n>10) n = alpha(n);
	cout<<n<<endl;
	return 0;
}
