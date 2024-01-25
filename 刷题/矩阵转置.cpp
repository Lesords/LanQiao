#include<iostream>//ac
using namespace std;
int a[25][25];
int main() {
	int n,m;
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= m;j++) cin>>a[i][j];
	for(int i = 1;i <= m;i++) {//ÐÐºÍÁÐ»¥»»
		for(int j = 1;j <= n;j++) {
			if(j!=1) cout<<' ';
			cout<<a[j][i];
		}
		cout<<endl;
	}
	return 0;
}
