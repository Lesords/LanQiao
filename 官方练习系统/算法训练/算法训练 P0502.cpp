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
		map[tmp]++;//ͳ������
		if(map[tmp]==num) ans = min(ans,tmp);//ȡСֵ
		else if(map[tmp]>num) num = map[tmp],ans = tmp;
		//ȡ���ִ������ֵ
	}
	cout<<ans;
	return 0;
}
