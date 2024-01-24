#include<iostream>//ac
#include<map>
#include<algorithm>
using namespace std;
int a[50];
int main() {
	int n,tmp,num = 0,ans;
	map<int,int> map;
	cin>>n;
	for(int i = 1;i <= n;i++) {
		cin>>tmp;
		map[tmp]++;//统计数量
		if(map[tmp]==num) ans = min(ans,tmp);//取小值
		else if(map[tmp]>num) num = map[tmp],ans = tmp;
		//取出现次数多的值
	}
	cout<<ans;
	return 0;
}
