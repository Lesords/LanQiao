#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main() {
	ll n = 10000;// -10  +5
	ll ans = 0;//���뿪ʼ����
	for(ll i = 1;;i++) {//��һ���ӣ�ͣһ���ӣ�����s
		if((i/60)%2==0) n -= 10;
		else n += 5;
		if(n==0) {
			ans = i;break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
