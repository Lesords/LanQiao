#include<iostream>//ac
#define ll long long
using namespace std;

//题解：
//当n为奇数的时候，取最大的三个数为 奇偶奇 ,不会有公因数

//当n为偶数的时候，若取最大的三个数则为 偶奇偶
//则此时两个偶数会有一个公因数 2
//所以第二个偶数可以向前移一位，则为 偶奇奇
//此时为 n*(n-1)*(n-3)

//当n为3的倍数时，n和（n-3）会有公因数 3
//所以可以把第一个数向前移一位，取 (n-1)
//则此时的结果为 (n-1)*(n-2)*(n-3)

int main() {
	ll n;
	cin>>n;
	if(n<=2) cout<<n<<endl;//小于2的时候不满足三个
	else if(n%2) cout<<n*(n-1)*(n-2)<<endl;//取最大三个数
	else {
		if(n%3==0) cout<<(n-1)*(n-2)*(n-3)<<endl;
		else cout<<n*(n-1)*(n-3)<<endl;
	}
	return 0;
}
