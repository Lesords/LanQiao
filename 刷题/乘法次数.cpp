#include<iostream>//ac
#include<cmath>
using namespace std;
int main() {
	int n,tmp,ans;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>tmp;
		ans = 0;
		//从大到小判断是否需要乘
        while(tmp!=1) {//1的话就需要乘了
        	ans += tmp%2?2:1;
			//偶数的话只需要乘一次
        	//奇数的话需要多乘以一次(低位， 低位*2)
        	tmp >>= 1;//除2
        }
        cout<<ans<<endl;
	}
	return 0;
}
