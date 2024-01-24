#include<iostream>//ac
using namespace std;
const int MAXN = 1e4 + 5;
int a[MAXN];
int main() {
	int n,cnt = 0,num = 0,pos = 0;
	cin>>n;
	while(cnt!=n-1) {//只留下一个时，退出
		pos = pos%n+1;//移动位置（环）
		if(a[pos]) continue;//跳过退出圈子的
		num++;//报数
		if(num==3) {//报数为3时，退出并清理
			num = 0,a[pos] = 1,cnt++;
		}//cnt表示退圈人数
	}
	for(int i = 1;i <= n;i++) if(!a[i]) {//找到没退圈的即为答案
		cout<<i<<endl;break;
	}
	return 0;
}
